#pragma once

// PUBG FULL SDK - Generated By Respecter (5.3.4.10 [04/03/2019]) SDK

#ifdef _MSC_VER
	#pragma pack(push, 0x8)
#endif

#include "PUBG_PresetColorComboBoxWidget_structs.hpp"

namespace SDK
{
//---------------------------------------------------------------------------
//Classes
//---------------------------------------------------------------------------

// WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C
// 0x0008 (0x02B0 - 0x02A8)
class UPresetColorComboBoxWidget_C : public UQualityComboBox_C
{
public:
	class UPresetColorWidget_C*                        ColorRef;                                                 // 0x02A8(0x0008) (Edit, BlueprintVisible, ZeroConstructor, DisableEditOnInstance, IsPlainOldData)

	static UClass* StaticClass()
	{
		static auto ptr = UObject::FindClass("WidgetBlueprintGeneratedClass PresetColorComboBoxWidget.PresetColorComboBoxWidget_C");
		return ptr;
	}


	class UWidget* On_ComboBox_GenerateWidget_1(class FString* Item);
};


}

#ifdef _MSC_VER
	#pragma pack(pop)
#endif