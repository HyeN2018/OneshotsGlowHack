#pragma once
#include "OneshotsGlowHack.h"

class Offsets // Offset class to store all of our Offsets
{
public:

	struct GlowStruct // The glowstruct that we are gonna write to the GlowObjectArray
	{
		float red = 1.f; 
		float green = 0.f;
		float blue = 0.f;
		float alpha = 1.f;
		byte Padd[8]; // just padding
		float buffer3 = 1.f;
		int buffer4 = 0 ;
		bool on = true;
		
	};
	//-----------Offsets-------------
	DWORD m_dwLocalPlayer = 0x0;
	DWORD m_dwEntityList = 0x0;
	DWORD m_dwGlowObject = 0x0;
	DWORD m_iHealth = 0x0;
	DWORD m_iTeamNum = 0x0;
	//-------------------------------
};

