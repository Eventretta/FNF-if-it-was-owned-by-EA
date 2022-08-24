#include <hxcpp.h>

#ifndef INCLUDED_FPSCapOption
#include <FPSCapOption.h>
#endif
#ifndef INCLUDED_Option
#include <Option.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_84c20c769231eb97_199_new,"FPSCapOption","new",0x20665810,"FPSCapOption.new","Options.hx",199,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_84c20c769231eb97_206_press,"FPSCapOption","press",0xf8102733,"FPSCapOption.press","Options.hx",206,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_84c20c769231eb97_211_updateDisplay,"FPSCapOption","updateDisplay",0x14c392e9,"FPSCapOption.updateDisplay","Options.hx",211,0x9d9a0240)

void FPSCapOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_84c20c769231eb97_199_new)
HXLINE( 200)		super::__construct();
HXLINE( 201)		this->description = desc;
            	}

Dynamic FPSCapOption_obj::__CreateEmpty() { return new FPSCapOption_obj; }

void *FPSCapOption_obj::_hx_vtable = 0;

Dynamic FPSCapOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< FPSCapOption_obj > _hx_result = new FPSCapOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool FPSCapOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x25e90a42) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x25e90a42;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool FPSCapOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_84c20c769231eb97_206_press)
HXDLIN( 206)		return false;
            	}


::String FPSCapOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_84c20c769231eb97_211_updateDisplay)
HXDLIN( 211)		return HX_("FPS Cap",1b,7c,07,3b);
            	}



FPSCapOption_obj::FPSCapOption_obj()
{
}

::hx::Val FPSCapOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *FPSCapOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *FPSCapOption_obj_sStaticStorageInfo = 0;
#endif

static ::String FPSCapOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class FPSCapOption_obj::__mClass;

void FPSCapOption_obj::__register()
{
	FPSCapOption_obj _hx_dummy;
	FPSCapOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("FPSCapOption",1e,50,bd,0a);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(FPSCapOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< FPSCapOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = FPSCapOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = FPSCapOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

