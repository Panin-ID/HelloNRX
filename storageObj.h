#pragma once
class storageObj
{
public:
	storageObj();
	
	vector<AcGePoint3d> vecPoint;
	vector<AcDbObjectId> vecId;
	int countPoint;
	
	static AcDbObjectId GetPrevID(AcDbObjectId currID)
	{
		//�������� �� �����
	}
	
	static AcDbObjectId GetNextID(AcDbObjectId currID)
	{
		//�������� �� �����
	}
private:
	vector<AcGePoint3d> mkPoints();

	vector<AcDbObjectId> mkAcIDs(int neededSize);
};

