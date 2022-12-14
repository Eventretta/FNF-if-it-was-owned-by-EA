#include <hxcpp.h>

#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_backends_IBackend
#include <polymod/backends/IBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_OpenFLWithNodeBackend
#include <polymod/backends/OpenFLWithNodeBackend.h>
#endif
#ifndef INCLUDED_polymod_backends_StubBackend
#include <polymod/backends/StubBackend.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_6221a35fe7addbaa_76_new,"polymod.backends.OpenFLWithNodeBackend","new",0xb88f0717,"polymod.backends.OpenFLWithNodeBackend.new","polymod/backends/OpenFLWithNodeBackend.hx",76,0x8013c019)
HX_LOCAL_STACK_FRAME(_hx_pos_6221a35fe7addbaa_71_boot,"polymod.backends.OpenFLWithNodeBackend","boot",0xbcb02d9b,"polymod.backends.OpenFLWithNodeBackend.boot","polymod/backends/OpenFLWithNodeBackend.hx",71,0x8013c019)
namespace polymod{
namespace backends{

void OpenFLWithNodeBackend_obj::__construct(){
            	HX_STACKFRAME(&_hx_pos_6221a35fe7addbaa_76_new)
HXLINE(  77)		super::__construct();
HXLINE(  81)		::polymod::Polymod_obj::error(HX_("failed_create_backend",13,58,1e,db),HX_("OpenFLWithNodeBackend requires the nodefs flag to be defined.",dd,26,91,aa),null());
            	}

Dynamic OpenFLWithNodeBackend_obj::__CreateEmpty() { return new OpenFLWithNodeBackend_obj; }

void *OpenFLWithNodeBackend_obj::_hx_vtable = 0;

Dynamic OpenFLWithNodeBackend_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< OpenFLWithNodeBackend_obj > _hx_result = new OpenFLWithNodeBackend_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool OpenFLWithNodeBackend_obj::_hx_isInstanceOf(int inClassId) {
	if (inClassId<=(int)0x2723d14f) {
		return inClassId==(int)0x00000001 || inClassId==(int)0x2723d14f;
	} else {
		return inClassId==(int)0x66589f31;
	}
}

::String OpenFLWithNodeBackend_obj::FINISHED_PRELOADING_ASSETS;


::hx::ObjectPtr< OpenFLWithNodeBackend_obj > OpenFLWithNodeBackend_obj::__new() {
	::hx::ObjectPtr< OpenFLWithNodeBackend_obj > __this = new OpenFLWithNodeBackend_obj();
	__this->__construct();
	return __this;
}

::hx::ObjectPtr< OpenFLWithNodeBackend_obj > OpenFLWithNodeBackend_obj::__alloc(::hx::Ctx *_hx_ctx) {
	OpenFLWithNodeBackend_obj *__this = (OpenFLWithNodeBackend_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(OpenFLWithNodeBackend_obj), true, "polymod.backends.OpenFLWithNodeBackend"));
	*(void **)__this = OpenFLWithNodeBackend_obj::_hx_vtable;
	__this->__construct();
	return __this;
}

OpenFLWithNodeBackend_obj::OpenFLWithNodeBackend_obj()
{
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *OpenFLWithNodeBackend_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo OpenFLWithNodeBackend_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &OpenFLWithNodeBackend_obj::FINISHED_PRELOADING_ASSETS,HX_("FINISHED_PRELOADING_ASSETS",3c,0f,02,85)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void OpenFLWithNodeBackend_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(OpenFLWithNodeBackend_obj::FINISHED_PRELOADING_ASSETS,"FINISHED_PRELOADING_ASSETS");
};

#ifdef HXCPP_VISIT_ALLOCS
static void OpenFLWithNodeBackend_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(OpenFLWithNodeBackend_obj::FINISHED_PRELOADING_ASSETS,"FINISHED_PRELOADING_ASSETS");
};

#endif

::hx::Class OpenFLWithNodeBackend_obj::__mClass;

static ::String OpenFLWithNodeBackend_obj_sStaticFields[] = {
	HX_("FINISHED_PRELOADING_ASSETS",3c,0f,02,85),
	::String(null())
};

void OpenFLWithNodeBackend_obj::__register()
{
	OpenFLWithNodeBackend_obj _hx_dummy;
	OpenFLWithNodeBackend_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.backends.OpenFLWithNodeBackend",a5,2f,72,a2);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = OpenFLWithNodeBackend_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(OpenFLWithNodeBackend_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< OpenFLWithNodeBackend_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = OpenFLWithNodeBackend_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = OpenFLWithNodeBackend_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = OpenFLWithNodeBackend_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void OpenFLWithNodeBackend_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_6221a35fe7addbaa_71_boot)
HXDLIN(  71)		FINISHED_PRELOADING_ASSETS = HX_("OpenFLWithNodeBackend.finishedPreloadingAssets",60,a8,c7,a9);
            	}
}

} // end namespace polymod
} // end namespace backends
