#include <hxcpp.h>

#ifndef INCLUDED_EtternaModeOption
#include <EtternaModeOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_flixel_FlxG
#include <flixel/FlxG.h>
#endif
#ifndef INCLUDED_flixel_util_FlxSave
#include <flixel/util/FlxSave.h>
#endif
#ifndef INCLUDED_flixel_util_IFlxDestroyable
#include <flixel/util/IFlxDestroyable.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_eb50b1934777f33e_156_new,"EtternaModeOption","new",0x7212d46f,"EtternaModeOption.new","Options.hx",156,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_eb50b1934777f33e_162_press,"EtternaModeOption","press",0x6b1bb952,"EtternaModeOption.press","Options.hx",162,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_eb50b1934777f33e_170_updateDisplay,"EtternaModeOption","updateDisplay",0x43ecdc08,"EtternaModeOption.updateDisplay","Options.hx",170,0x9d9a0240)

void EtternaModeOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_eb50b1934777f33e_156_new)
HXLINE( 157)		super::__construct();
HXLINE( 158)		this->description = desc;
            	}

Dynamic EtternaModeOption_obj::__CreateEmpty() { return new EtternaModeOption_obj; }

void *EtternaModeOption_obj::_hx_vtable = 0;

Dynamic EtternaModeOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EtternaModeOption_obj > _hx_result = new EtternaModeOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool EtternaModeOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x27a70eb9) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x27a70eb9;
	} else {
		return inClassId==(int)0x7f75384d;
	}
}

bool EtternaModeOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_eb50b1934777f33e_162_press)
HXLINE( 163)		::flixel::FlxG_obj::save->data->__SetField(HX_("etternaMode",88,13,b2,ac),!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("etternaMode",88,13,b2,ac),::hx::paccDynamic)) )),::hx::paccDynamic);
HXLINE( 164)		this->display = this->updateDisplay();
HXLINE( 165)		return true;
            	}


::String EtternaModeOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_eb50b1934777f33e_170_updateDisplay)
HXDLIN( 170)		::String _hx_tmp;
HXDLIN( 170)		if (!(( (bool)(::flixel::FlxG_obj::save->data->__Field(HX_("etternaMode",88,13,b2,ac),::hx::paccDynamic)) ))) {
HXDLIN( 170)			_hx_tmp = HX_("off",6f,93,54,00);
            		}
            		else {
HXDLIN( 170)			_hx_tmp = HX_("on",1f,61,00,00);
            		}
HXDLIN( 170)		return (HX_("Etterna Mode ",42,4e,8a,89) + _hx_tmp);
            	}



::hx::ObjectPtr< EtternaModeOption_obj > EtternaModeOption_obj::__new(::String desc) {
	::hx::ObjectPtr< EtternaModeOption_obj > __this = new EtternaModeOption_obj();
	__this->__construct(desc);
	return __this;
}

::hx::ObjectPtr< EtternaModeOption_obj > EtternaModeOption_obj::__alloc(::hx::Ctx *_hx_ctx,::String desc) {
	EtternaModeOption_obj *__this = (EtternaModeOption_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EtternaModeOption_obj), true, "EtternaModeOption"));
	*(void **)__this = EtternaModeOption_obj::_hx_vtable;
	__this->__construct(desc);
	return __this;
}

EtternaModeOption_obj::EtternaModeOption_obj()
{
}

::hx::Val EtternaModeOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"press") ) { return ::hx::Val( press_dyn() ); }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"updateDisplay") ) { return ::hx::Val( updateDisplay_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EtternaModeOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *EtternaModeOption_obj_sStaticStorageInfo = 0;
#endif

static ::String EtternaModeOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class EtternaModeOption_obj::__mClass;

void EtternaModeOption_obj::__register()
{
	EtternaModeOption_obj _hx_dummy;
	EtternaModeOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("EtternaModeOption",fd,70,fe,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(EtternaModeOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< EtternaModeOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EtternaModeOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EtternaModeOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

