#include <hxcpp.h>

#ifndef INCLUDED_io_newgrounds_NGLite
#include <io/newgrounds/NGLite.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_AsyncHttp
#include <io/newgrounds/utils/AsyncHttp.h>
#endif
#ifndef INCLUDED_io_newgrounds_utils_AsyncNGCall
#include <io/newgrounds/utils/AsyncNGCall.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ab06d04f98a2c657_34_send,"io.newgrounds.utils.AsyncNGCall","send",0x56458eda,"io.newgrounds.utils.AsyncNGCall.send","io/newgrounds/utils/AsyncHttp.hx",34,0x570428f2)
HX_LOCAL_STACK_FRAME(_hx_pos_ab06d04f98a2c657_26_boot,"io.newgrounds.utils.AsyncNGCall","boot",0x4b1085c4,"io.newgrounds.utils.AsyncNGCall.boot","io/newgrounds/utils/AsyncHttp.hx",26,0x570428f2)
namespace io{
namespace newgrounds{
namespace utils{

void AsyncNGCall_obj::__construct() { }

Dynamic AsyncNGCall_obj::__CreateEmpty() { return new AsyncNGCall_obj; }

void *AsyncNGCall_obj::_hx_vtable = 0;

Dynamic AsyncNGCall_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< AsyncNGCall_obj > _hx_result = new AsyncNGCall_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool AsyncNGCall_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x4e4effd4;
}

::String AsyncNGCall_obj::PATH;

void AsyncNGCall_obj::send( ::io::newgrounds::NGLite core,::String data, ::Dynamic onData, ::Dynamic onError, ::Dynamic onStatus){
            	HX_STACKFRAME(&_hx_pos_ab06d04f98a2c657_34_send)
HXLINE(  36)		if (core->verbose) {
HXLINE(  36)			core->log((HX_("sending: ",c0,09,59,eb) + data),::hx::SourceInfo(HX_("io/newgrounds/utils/AsyncHttp.hx",f2,28,04,57),36,HX_("io.newgrounds.utils.AsyncNGCall",1c,c8,62,c1),HX_("send",48,8d,50,4c)));
            		}
HXLINE(  39)		::io::newgrounds::utils::AsyncHttp_obj::sendAsync(HX_("https://newgrounds.io/gateway_v3.php",f8,8a,a1,a2),data,onData,onError,onStatus,core->logVerbose_dyn());
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(AsyncNGCall_obj,send,(void))


AsyncNGCall_obj::AsyncNGCall_obj()
{
}

bool AsyncNGCall_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 4:
		if (HX_FIELD_EQ(inName,"send") ) { outValue = send_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *AsyncNGCall_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo AsyncNGCall_obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &AsyncNGCall_obj::PATH,HX_("PATH",a5,ad,12,35)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void AsyncNGCall_obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(AsyncNGCall_obj::PATH,"PATH");
};

#ifdef HXCPP_VISIT_ALLOCS
static void AsyncNGCall_obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(AsyncNGCall_obj::PATH,"PATH");
};

#endif

::hx::Class AsyncNGCall_obj::__mClass;

static ::String AsyncNGCall_obj_sStaticFields[] = {
	HX_("PATH",a5,ad,12,35),
	HX_("send",48,8d,50,4c),
	::String(null())
};

void AsyncNGCall_obj::__register()
{
	AsyncNGCall_obj _hx_dummy;
	AsyncNGCall_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.utils.AsyncNGCall",1c,c8,62,c1);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &AsyncNGCall_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = AsyncNGCall_obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(AsyncNGCall_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< AsyncNGCall_obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = AsyncNGCall_obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = AsyncNGCall_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = AsyncNGCall_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void AsyncNGCall_obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_ab06d04f98a2c657_26_boot)
HXDLIN(  26)		PATH = HX_("https://newgrounds.io/gateway_v3.php",f8,8a,a1,a2);
            	}
}

} // end namespace io
} // end namespace newgrounds
} // end namespace utils
