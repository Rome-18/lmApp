#ifndef lmAllDecInfo_h__
#define lmAllDecInfo_h__
#include "../../../lmDecInfoData/src/lmPSData.h"
class ParameterSetManager;
class lmAllDecInfo
{
public:
	//使用单例模式,将所有信息存在这里面;
	static lmAllDecInfo* getInstance();
	~lmAllDecInfo();
	void getPsInfo(const lmPSData& rps);
	bool preDecReady() { return !mpsdec[paraTYPE::vps].empty(); };
	void outputPreDec();
	void outputDec();
public:
	lmAllDecInfo& operator<<(const lmPSData& rps);
private:
	lmAllDecInfo();
	static lmAllDecInfo* _instance;
	const std::string mOutPreDec = "predec.txt";
	const std::string mOutTxtpath = "dec.txt";
	std::vector<std::vector<lmPSData>> mpsdec;
};
#endif // lmAllDecInfo_h__

