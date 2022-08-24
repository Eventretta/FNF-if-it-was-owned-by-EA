#include <hxcpp.h>

#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_backends_HEAPSBackend
#include <polymod/backends/HEAPSBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_StubBackend
#include <polymod/backends/StubBackend.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_8d671e62deecd3f2_52_new,"polymod.backends.HEAPSBackend","new",0x8303f196,"polymod.backends.HEAPSBackend.new","polymod/backends/HEAPSBackend.hx",52,0x2ef036ba)
namespace polymod{
namespace backends{

void HEAPSBackend_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_8d671e62deecd3f2_52_new)
HXLINE(  53)		super::__construct();
HXLINE(  54)		::polymod::Polymod_obj::error(HX_("failed_create_backend",13,58,1e,db),HX_("HEAPSBackend requires the heaps library, did you forget to install it?",b3,3d,fc,0f),null());
            	}

Dynamic HEAPSBackend_obj::__CreateEmpty() { return new HEAPSBackend_obj; }

void *HEAPSBackend_obj::_hx_vtable = 0;

Dynamic HEAPSBackend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< HEAPSBackend_obj > _hx_result = new HEAPSBackend_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool HEAPSBackend_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x264edc02) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x264edc02;
	} else {
		return inClassId==(int)0x66589f31;
	}
}


::hx::ObjectPtr< HEAPSBackend_obj > HEAPSBackend_obj::__new() {
	::hx::ObjectPtr< HEAPSBackend_obj > __this = new HEAPSBackend_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< HEAPSBackend_obj > HEAPSBackend_obj::__alloc(::hx::Ctx *_hx_ctx) {
	HEAPSBackend_obj *__this = (HEAPSBackend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(HEAPSBackend_obj), true, "polymod.backends.HEAPSBackend"));
	*(void **)__this = HEAPSBackend_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

HEAPSBackend_obj::HEAPSBackend_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *HEAPSBackend_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *HEAPSBackend_obj_sStaticStorageInfo = 0;
#endif

::hx::Class HEAPSBackend_obj::__mClass;

void HEAPSBackend_obj::__register()
{
	HEAPSBackend_obj _hx_dummy;
	HEAPSBackend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.HEAPSBackend",a4,2e,e2,6e);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< HEAPSBackend_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = HEAPSBackend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = HEAPSBackend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace backends