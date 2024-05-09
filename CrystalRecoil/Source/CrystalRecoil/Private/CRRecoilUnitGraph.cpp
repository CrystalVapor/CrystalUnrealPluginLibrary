﻿// Copyright CrystalVapor 2024, All rights reserved.


#include "CRRecoilUnitGraph.h"

FCRRecoilUnit UCRRecoilUnitGraph::CreateNewUnit(const FVector2d& RecoilUnitLocation)
{
	return FCRRecoilUnit(NextID++, RecoilUnitLocation);
}

int32 UCRRecoilUnitGraph::AddUnit(const FVector2d& RecoilUnitLocation)
{
	RecoilUnits.Add(FCRRecoilUnit(NextID++, RecoilUnitLocation));
	OnUnitAdded.Broadcast(NextID - 1);
	return NextID-1;
}

void UCRRecoilUnitGraph::InsertUnit(FCRRecoilUnit& RecoilUnit, int32 Index)
{
	OnUnitAdded.Broadcast(RecoilUnit.ID);
	RecoilUnits.Insert(RecoilUnit, Index);
}

void UCRRecoilUnitGraph::RemoveAt(int32 Index)
{
	OnUnitRemoved.Broadcast(RecoilUnits[Index].ID);
	RecoilUnits.RemoveAt(Index);
}

void UCRRecoilUnitGraph::Empty()
{
	RecoilUnits.Empty();
}

FVector2D UCRRecoilUnitGraph::GetUnitLocationAt(int32 Index)
{
	return GetUnitAt(Index).Location;
}

FCRRecoilUnit& UCRRecoilUnitGraph::GetUnitAt(int32 Index)
{
	return RecoilUnits[Index];
}

const FCRRecoilUnit& UCRRecoilUnitGraph::GetUnitAt(int32 Index) const
{
	return RecoilUnits[Index];
}

int32 UCRRecoilUnitGraph::GetUnitCount() const
{
	return RecoilUnits.Num();
}

void UCRRecoilUnitGraph::RemoveUnitByID(uint32 ID)
{
	OnUnitRemoved.Broadcast(ID);
	RecoilUnits.RemoveAll([ID](const FCRRecoilUnit& Unit) { return Unit.ID == ID; });
}

FCRRecoilUnit* UCRRecoilUnitGraph::GetUnitByID(uint32 ID)
{
	return RecoilUnits.FindByPredicate([ID](const FCRRecoilUnit& Unit) { return Unit.ID == ID; });
}

TArray<FCRRecoilUnit>& UCRRecoilUnitGraph::GetRawData()
{
	return RecoilUnits;
}

void UCRRecoilUnitGraph::RearrangeID()
{
	for(auto& RecoilUnit : RecoilUnits)
	{
		OnUnitRemoved.Broadcast(RecoilUnit.ID);
	}
	NextID = 0;
	for(auto& RecoilUnit : RecoilUnits)
	{
		RecoilUnit.ID = NextID++;
		OnUnitAdded.Broadcast(RecoilUnit.ID);
	}
}

void UCRRecoilUnitGraph::RearrangeUnits()
{
	switch(RearrangePolicy)
	{
	case ECRRecoilUnitGraphRearrangePolicy::AscendByY:
		{
			auto SortLambda = [](const FCRRecoilUnit& A, const FCRRecoilUnit& B) { return A.Location.Y < B.Location.Y; };
			Algo::Sort(RecoilUnits, SortLambda);
		}
		break;
	case ECRRecoilUnitGraphRearrangePolicy::DescendByY:
		{
			auto SortLambda = [](const FCRRecoilUnit& A, const FCRRecoilUnit& B) { return A.Location.Y > B.Location.Y; };
			Algo::Sort(RecoilUnits, SortLambda);
		}
		break;
	case ECRRecoilUnitGraphRearrangePolicy::AscendByX:
		{
			auto SortLambda = [](const FCRRecoilUnit& A, const FCRRecoilUnit& B) { return A.Location.X < B.Location.X; };
			Algo::Sort(RecoilUnits, SortLambda);
		}
		break;
	case ECRRecoilUnitGraphRearrangePolicy::DescendByX:
		{
			auto SortLambda = [](const FCRRecoilUnit& A, const FCRRecoilUnit& B) { return A.Location.X > B.Location.X; };
			Algo::Sort(RecoilUnits, SortLambda);
		}
		break;
	}

}
