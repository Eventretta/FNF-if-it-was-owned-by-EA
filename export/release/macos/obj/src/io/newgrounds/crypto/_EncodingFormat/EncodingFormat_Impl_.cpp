#include <hxcpp.h>

#ifndef INCLUDED_haxe_crypto_Base64
#include <haxe/crypto/Base64.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto__EncodingFormat_EncodingFormat_Impl_
#include <io/newgrounds/crypto/_EncodingFormat/EncodingFormat_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_e5a096a9f64fbebe_13_encode,"io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_","encode",0xc931dae2,"io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_.encode","io/newgrounds/crypto/EncodingFormat.hx",13,0x2ae8df00)
HX_LOCAL_STACK_FRAME(_hx_pos_e5a096a9f64fbebe_23_decode,"io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_","decode",0x343b45fa,"io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_.decode","io/newgrounds/crypto/EncodingFormat.hx",23,0x2ae8df00)
HX_LOCAL_STACK_FRAME(_hx_pos_e5a096a9f64fbebe_8_boot,"io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_","boot",0xf5dd61fe,"io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_.boot","io/newgrounds/crypto/EncodingFormat.hx",8,0x2ae8df00)
HX_LOCAL_STACK_FRAME(_hx_pos_e5a096a9f64fbebe_9_boot,"io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_","boot",0xf5dd61fe,"io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_.boot","io/newgrounds/crypto/EncodingFormat.hx",9,0x2ae8df00)
namespace io{
namespace newgrounds{
namespace crypto{
namespace _EncodingFormat{

void EncodingFormat_Impl__obj::__construct() { }

Dynamic EncodingFormat_Impl__obj::__CreateEmpty() { return new EncodingFormat_Impl__obj; }

void *EncodingFormat_Impl__obj::_hx_vtable = 0;

Dynamic EncodingFormat_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< EncodingFormat_Impl__obj > _hx_result = new EncodingFormat_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool EncodingFormat_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x0d2a28e0;
}

::String EncodingFormat_Impl__obj::BASE_64;

::String EncodingFormat_Impl__obj::HEX;

::String EncodingFormat_Impl__obj::encode(::String this1, ::haxe::io::Bytes dataBytes){
            	HX_STACKFRAME(&_hx_pos_e5a096a9f64fbebe_13_encode)
HXDLIN(  13)		::String _hx_switch_0 = this1;
            		if (  (_hx_switch_0==HX_("base64",8f,fd,27,55)) ){
HXLINE(  15)			return ::haxe::crypto::Base64_obj::encode(dataBytes,null());
HXDLIN(  15)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("hex",db,42,4f,00)) ){
HXLINE(  16)			return dataBytes->toHex();
HXDLIN(  16)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  17)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  13)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EncodingFormat_Impl__obj,encode,return )

 ::haxe::io::Bytes EncodingFormat_Impl__obj::decode(::String this1,::String data){
            	HX_STACKFRAME(&_hx_pos_e5a096a9f64fbebe_23_decode)
HXDLIN(  23)		::String _hx_switch_0 = this1;
            		if (  (_hx_switch_0==HX_("base64",8f,fd,27,55)) ){
HXLINE(  25)			return ::haxe::crypto::Base64_obj::decode(data,null());
HXDLIN(  25)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("hex",db,42,4f,00)) ){
HXLINE(  26)			return ::haxe::io::Bytes_obj::ofHex(data);
HXDLIN(  26)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  27)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  23)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(EncodingFormat_Impl__obj,decode,return )


EncodingFormat_Impl__obj::EncodingFormat_Impl__obj()
{
}

bool EncodingFormat_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"encode") ) { outValue = encode_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"decode") ) { outValue = decode_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *EncodingFormat_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo EncodingFormat_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &EncodingFormat_Impl__obj::BASE_64,HX_("BASE_64",ec,35,e1,ad)},
	{::hx::fsString,(void *) &EncodingFormat_Impl__obj::HEX,HX_("HEX",bb,de,36,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void EncodingFormat_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(EncodingFormat_Impl__obj::BASE_64,"BASE_64");
	HX_MARK_MEMBER_NAME(EncodingFormat_Impl__obj::HEX,"HEX");
};

#ifdef HXCPP_VISIT_ALLOCS
static void EncodingFormat_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(EncodingFormat_Impl__obj::BASE_64,"BASE_64");
	HX_VISIT_MEMBER_NAME(EncodingFormat_Impl__obj::HEX,"HEX");
};

#endif

::hx::Class EncodingFormat_Impl__obj::__mClass;

static ::String EncodingFormat_Impl__obj_sStaticFields[] = {
	HX_("BASE_64",ec,35,e1,ad),
	HX_("HEX",bb,de,36,00),
	HX_("encode",16,f2,e3,f9),
	HX_("decode",2e,5d,ed,64),
	::String(null())
};

void EncodingFormat_Impl__obj::__register()
{
	EncodingFormat_Impl__obj _hx_dummy;
	EncodingFormat_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_",22,56,77,61);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &EncodingFormat_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = EncodingFormat_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(EncodingFormat_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< EncodingFormat_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = EncodingFormat_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = EncodingFormat_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = EncodingFormat_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void EncodingFormat_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_e5a096a9f64fbebe_8_boot)
HXDLIN(   8)		BASE_64 = HX_("base64",8f,fd,27,55);
            	}
{
            	HX_STACKFRAME(&_hx_pos_e5a096a9f64fbebe_9_boot)
HXDLIN(   9)		HEX = HX_("hex",db,42,4f,00);
            	}
}

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _EncodingFormat
