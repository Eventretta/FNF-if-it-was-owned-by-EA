#include <hxcpp.h>

#ifndef INCLUDED_Option
#include <Option.h>
#endif
#ifndef INCLUDED_ScrollSpeedOption
#include <ScrollSpeedOption.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_219_new,"ScrollSpeedOption","new",0xe9c533a1,"ScrollSpeedOption.new","Options.hx",219,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_226_press,"ScrollSpeedOption","press",0xfb89c904,"ScrollSpeedOption.press","Options.hx",226,0x9d9a0240)
HX_LOCAL_STACK_FRAME(_hx_pos_aba31ccdfcd6978a_231_updateDisplay,"ScrollSpeedOption","updateDisplay",0xc35cedba,"ScrollSpeedOption.updateDisplay","Options.hx",231,0x9d9a0240)

void ScrollSpeedOption_obj::__construct(::String desc){
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_219_new)
HXLINE( 220)		super::__construct();
HXLINE( 221)		this->description = desc;
            	}

Dynamic ScrollSpeedOption_obj::__CreateEmpty() { return new ScrollSpeedOption_obj; }

void *ScrollSpeedOption_obj::_hx_vtable = 0;

Dynamic ScrollSpeedOption_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< ScrollSpeedOption_obj > _hx_result = new ScrollSpeedOption_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool ScrollSpeedOption_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x08bb846f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x08bb846f;
	} else {
		return inClassId==(int)0x27a70eb9;
	}
}

bool ScrollSpeedOption_obj::press(){
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_226_press)
HXDLIN( 226)		return false;
            	}


::String ScrollSpeedOption_obj::updateDisplay(){
            	HX_STACKFRAME(&_hx_pos_aba31ccdfcd6978a_231_updateDisplay)
HXDLIN( 231)		return HX_("Scroll Speed",34,bf,42,cb);
            	}



ScrollSpeedOption_obj::ScrollSpeedOption_obj()
{
}

::hx::Val ScrollSpeedOption_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
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
static ::hx::StorageInfo *ScrollSpeedOption_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *ScrollSpeedOption_obj_sStaticStorageInfo = 0;
#endif

static ::String ScrollSpeedOption_obj_sMemberFields[] = {
	HX_("press",83,53,88,c8),
	HX_("updateDisplay",39,8f,b8,86),
	::String(null()) };

::hx::Class ScrollSpeedOption_obj::__mClass;

void ScrollSpeedOption_obj::__register()
{
	ScrollSpeedOption_obj _hx_dummy;
	ScrollSpeedOption_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("ScrollSpeedOption",2f,cf,20,b9);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(ScrollSpeedOption_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< ScrollSpeedOption_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = ScrollSpeedOption_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = ScrollSpeedOption_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

