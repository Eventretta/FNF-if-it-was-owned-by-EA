#include <hxcpp.h>

#ifndef INCLUDED___ASSET__flixel_fonts_monsterrat_ttf
#include <__ASSET__flixel_fonts_monsterrat_ttf.h>
#endif
#ifndef INCLUDED_haxe_Resource
#include <haxe/Resource.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_lime_text_Font
#include <lime/text/Font.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_468ad21a63384077_307_new,"__ASSET__flixel_fonts_monsterrat_ttf","new",0x5ab5a7f2,"__ASSET__flixel_fonts_monsterrat_ttf.new","lime/_internal/macros/AssetsMacro.hx",307,0xc651f030)
HX_LOCAL_STACK_FRAME(_hx_pos_3b6a061d5426b2eb_556_boot,"__ASSET__flixel_fonts_monsterrat_ttf","boot",0xfc564c60,"__ASSET__flixel_fonts_monsterrat_ttf.boot","ManifestResources.hx",556,0xf77aa668)

void __ASSET__flixel_fonts_monsterrat_ttf_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_468ad21a63384077_307_new)
HXLINE( 308)		super::__construct(null());
HXLINE( 310)		this->_hx___fromBytes(::haxe::Resource_obj::getBytes(::__ASSET__flixel_fonts_monsterrat_ttf_obj::resourceName));
            	}

Dynamic __ASSET__flixel_fonts_monsterrat_ttf_obj::__CreateEmpty() { return new __ASSET__flixel_fonts_monsterrat_ttf_obj; }

void *__ASSET__flixel_fonts_monsterrat_ttf_obj::_hx_vtable = 0;

Dynamic __ASSET__flixel_fonts_monsterrat_ttf_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< __ASSET__flixel_fonts_monsterrat_ttf_obj > _hx_result = new __ASSET__flixel_fonts_monsterrat_ttf_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool __ASSET__flixel_fonts_monsterrat_ttf_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x40cee131) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x40cee131;
	} else {
		return inClassId==(int)0x60de19c0;
	}
}

::String __ASSET__flixel_fonts_monsterrat_ttf_obj::resourceName;


::hx::ObjectPtr< __ASSET__flixel_fonts_monsterrat_ttf_obj > __ASSET__flixel_fonts_monsterrat_ttf_obj::__new() {
	::hx::ObjectPtr< __ASSET__flixel_fonts_monsterrat_ttf_obj > __this = new __ASSET__flixel_fonts_monsterrat_ttf_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< __ASSET__flixel_fonts_monsterrat_ttf_obj > __ASSET__flixel_fonts_monsterrat_ttf_obj::__alloc(::hx::Ctx *_hx_ctx) {
	__ASSET__flixel_fonts_monsterrat_ttf_obj *__this = (__ASSET__flixel_fonts_monsterrat_ttf_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(__ASSET__flixel_fonts_monsterrat_ttf_obj), true, "__ASSET__flixel_fonts_monsterrat_ttf"));
	*(void **)__this = __ASSET__flixel_fonts_monsterrat_ttf_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

__ASSET__flixel_fonts_monsterrat_ttf_obj::__ASSET__flixel_fonts_monsterrat_ttf_obj()
{
}

bool __ASSET__flixel_fonts_monsterrat_ttf_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { outValue = ( resourceName ); return true; }
	}
	return false;
}

bool __ASSET__flixel_fonts_monsterrat_ttf_obj::__SetStatic(const ::String &inName,Dynamic &ioValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 12:
		if (HX_FIELD_EQ(inName,"resourceName") ) { resourceName=ioValue.Cast< ::String >(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *__ASSET__flixel_fonts_monsterrat_ttf_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo __ASSET__flixel_fonts_monsterrat_ttf_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &__ASSET__flixel_fonts_monsterrat_ttf_obj::resourceName,HX_("resourceName",39,7a,62,90)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void __ASSET__flixel_fonts_monsterrat_ttf_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(__ASSET__flixel_fonts_monsterrat_ttf_obj::resourceName,"resourceName");
};

#ifdef HXCPP_VISIT_ALLOCS
static void __ASSET__flixel_fonts_monsterrat_ttf_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(__ASSET__flixel_fonts_monsterrat_ttf_obj::resourceName,"resourceName");
};

#endif

::hx::Class __ASSET__flixel_fonts_monsterrat_ttf_obj::__mClass;

static ::String __ASSET__flixel_fonts_monsterrat_ttf_obj_sStaticFields[] = {
	HX_("resourceName",39,7a,62,90),
	::String(null())
};

void __ASSET__flixel_fonts_monsterrat_ttf_obj::__register()
{
	__ASSET__flixel_fonts_monsterrat_ttf_obj _hx_dummy;
	__ASSET__flixel_fonts_monsterrat_ttf_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("__ASSET__flixel_fonts_monsterrat_ttf",00,87,aa,86);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &__ASSET__flixel_fonts_monsterrat_ttf_obj::__GetStatic;
	__mClass->mSetStaticField = &__ASSET__flixel_fonts_monsterrat_ttf_obj::__SetStatic;
	__mClass->mMarkFunc = __ASSET__flixel_fonts_monsterrat_ttf_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(__ASSET__flixel_fonts_monsterrat_ttf_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< __ASSET__flixel_fonts_monsterrat_ttf_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = __ASSET__flixel_fonts_monsterrat_ttf_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = __ASSET__flixel_fonts_monsterrat_ttf_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = __ASSET__flixel_fonts_monsterrat_ttf_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void __ASSET__flixel_fonts_monsterrat_ttf_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_3b6a061d5426b2eb_556_boot)
HXDLIN( 556)		resourceName = HX_("LIME_font___ASSET__flixel_fonts_monsterrat_ttf",c6,95,44,8e);
            	}
}

