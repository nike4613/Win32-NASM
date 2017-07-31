// The following ifdef block is the standard way of creating macros which make exporting 
// from a DLL simpler. All files within this DLL are compiled with the IPCOM_EXPORTS
// symbol defined on the command line. This symbol should not be defined on any project
// that uses this DLL. This way any other project whose source files include this file see 
// IPCOM_API functions as being imported from a DLL, whereas this DLL sees symbols
// defined with this macro as being exported.
#ifdef IPCOM_EXPORTS
#define IPCOM_API __declspec(dllexport)
#else
#define IPCOM_API __declspec(dllimport)
#endif

// This class is exported from the IPCom.dll
class IPCOM_API CIPCom {
public:
	CIPCom(void);
	// TODO: add your methods here.
};

extern IPCOM_API int nIPCom;

IPCOM_API int fnIPCom(void);
