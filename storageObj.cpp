#include "stdafx.h"
#include "storageObj.h"

storageObj::storageObj()
{
	vecPoint = mkPoints();
	countPoint = vecPoint.size();
	vecId = mkAcIDs(vecPoint.size());
}


vector<AcGePoint3d> storageObj::mkPoints()
{
	double lol[] = { 14.7372,-55,-127,-55,-167,-15,-167,112,-119,152,-69,65,-19,152,55, 95.2628, };
	vector<AcGePoint3d> Points;
	for (int i = 0; i < size(lol) - 1; i += 2)
	{
		Points.push_back(AcGePoint3d(lol[i], lol[i + 1], 0));
	}
	return Points;
}

vector<AcDbObjectId> storageObj::mkAcIDs(int neededSize)
{
	vector<AcDbObjectId> vec;
	for (int i = 0; i < neededSize; i++)
	{
		AcDbObjectId* lineId = new AcDbObjectId;
		vec.push_back(*lineId);
	}
	return vec;
}

static AcDbObjectId GetPrevID(AcDbObjectId currID)
{
	//�������� �� �����
}
static AcDbObjectId GetNextID(AcDbObjectId currID)
{
	//�������� �� �����
}