#include <hxcpp.h>

#ifndef INCLUDED_95f339a1d026d52c
#define INCLUDED_95f339a1d026d52c
#include "hxMath.h"
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto_Aes
#include <io/newgrounds/crypto/Aes.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto__Aes_CBC
#include <io/newgrounds/crypto/_Aes/CBC.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto__Aes_PKCS7
#include <io/newgrounds/crypto/_Aes/PKCS7.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_344581849f1143c3_12_new,"io.newgrounds.crypto.Aes","new",0x4479bf2e,"io.newgrounds.crypto.Aes.new","io/newgrounds/crypto/Aes.hx",12,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_344581849f1143c3_18_encrypt,"io.newgrounds.crypto.Aes","encrypt",0x64dbec33,"io.newgrounds.crypto.Aes.encrypt","io/newgrounds/crypto/Aes.hx",18,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_344581849f1143c3_30_decrypt,"io.newgrounds.crypto.Aes","decrypt",0xa210361b,"io.newgrounds.crypto.Aes.decrypt","io/newgrounds/crypto/Aes.hx",30,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_344581849f1143c3_39_generateIV,"io.newgrounds.crypto.Aes","generateIV",0xf58c3d54,"io.newgrounds.crypto.Aes.generateIV","io/newgrounds/crypto/Aes.hx",39,0xa53cc523)
namespace io{
namespace newgrounds{
namespace crypto{

void Aes_obj::__construct( ::haxe::io::Bytes key){
            	HX_STACKFRAME(&_hx_pos_344581849f1143c3_12_new)
HXLINE(  14)		this->key = key;
HXLINE(  15)		this->roundKey = ::io::newgrounds::crypto::_Aes::CBC_obj::keyExpansion(key);
            	}

Dynamic Aes_obj::__CreateEmpty() { return new Aes_obj; }

void *Aes_obj::_hx_vtable = 0;

Dynamic Aes_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Aes_obj > _hx_result = new Aes_obj();
	_hx_result->__construct(inArgs[0]);
	return _hx_result;
}

bool Aes_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x6492873c;
}

 ::haxe::io::Bytes Aes_obj::encrypt( ::haxe::io::Bytes data){
            	HX_GC_STACKFRAME(&_hx_pos_344581849f1143c3_18_encrypt)
HXLINE(  20)		 ::haxe::io::Bytes iv = ::io::newgrounds::crypto::Aes_obj::generateIV(null());
HXLINE(  22)		 ::haxe::io::Bytes out = ::io::newgrounds::crypto::_Aes::CBC_obj::encrypt(::io::newgrounds::crypto::_Aes::PKCS7_obj::pad(data),iv,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  24)		 ::haxe::io::BytesBuffer buffer =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE(  25)		{
HXLINE(  25)			::Array< unsigned char > b1 = buffer->b;
HXDLIN(  25)			::Array< unsigned char > b2 = iv->b;
HXDLIN(  25)			{
HXLINE(  25)				int _g = 0;
HXDLIN(  25)				int _g1 = iv->length;
HXDLIN(  25)				while((_g < _g1)){
HXLINE(  25)					_g = (_g + 1);
HXDLIN(  25)					int i = (_g - 1);
HXDLIN(  25)					buffer->b->push(b2->__get(i));
            				}
            			}
            		}
HXLINE(  26)		{
HXLINE(  26)			::Array< unsigned char > b11 = buffer->b;
HXDLIN(  26)			::Array< unsigned char > b21 = out->b;
HXDLIN(  26)			{
HXLINE(  26)				int _g2 = 0;
HXDLIN(  26)				int _g3 = out->length;
HXDLIN(  26)				while((_g2 < _g3)){
HXLINE(  26)					_g2 = (_g2 + 1);
HXDLIN(  26)					int i = (_g2 - 1);
HXDLIN(  26)					buffer->b->push(b21->__get(i));
            				}
            			}
            		}
HXLINE(  27)		return buffer->getBytes();
            	}


HX_DEFINE_DYNAMIC_FUNC1(Aes_obj,encrypt,return )

 ::haxe::io::Bytes Aes_obj::decrypt( ::haxe::io::Bytes data){
            	HX_STACKFRAME(&_hx_pos_344581849f1143c3_30_decrypt)
HXLINE(  32)		 ::haxe::io::Bytes iv = data->sub(0,16);
HXLINE(  34)		 ::haxe::io::Bytes out = data->sub(16,(data->length - 16));
HXLINE(  35)		out = ::io::newgrounds::crypto::_Aes::CBC_obj::decrypt(out,iv,::hx::ObjectPtr<OBJ_>(this));
HXLINE(  36)		return ::io::newgrounds::crypto::_Aes::PKCS7_obj::unpad(out);
            	}


HX_DEFINE_DYNAMIC_FUNC1(Aes_obj,decrypt,return )

 ::haxe::io::Bytes Aes_obj::generateIV(::hx::Null< int >  __o_bytes){
            		int bytes = __o_bytes.Default(16);
            	HX_STACKFRAME(&_hx_pos_344581849f1143c3_39_generateIV)
HXLINE(  41)		 ::haxe::io::Bytes iv = ::haxe::io::Bytes_obj::alloc(bytes);
HXLINE(  42)		{
HXLINE(  42)			int _g = 0;
HXDLIN(  42)			int _g1 = bytes;
HXDLIN(  42)			while((_g < _g1)){
HXLINE(  42)				_g = (_g + 1);
HXDLIN(  42)				int i = (_g - 1);
HXLINE(  43)				iv->b[i] = ( (unsigned char)(::Math_obj::floor((::Math_obj::random() * ( (Float)(256) )))) );
            			}
            		}
HXLINE(  45)		return iv;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Aes_obj,generateIV,return )


::hx::ObjectPtr< Aes_obj > Aes_obj::__new( ::haxe::io::Bytes key) {
	::hx::ObjectPtr< Aes_obj > __this = new Aes_obj();
	__this->__construct(key);
	return __this;
}

::hx::ObjectPtr< Aes_obj > Aes_obj::__alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes key) {
	Aes_obj *__this = (Aes_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Aes_obj), true, "io.newgrounds.crypto.Aes"));
	*(void **)__this = Aes_obj::_hx_vtable;
	__this->__construct(key);
	return __this;
}

Aes_obj::Aes_obj()
{
}

void Aes_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(Aes);
	HX_MARK_MEMBER_NAME(key,"key");
	HX_MARK_MEMBER_NAME(roundKey,"roundKey");
	HX_MARK_END_CLASS();
}

void Aes_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(key,"key");
	HX_VISIT_MEMBER_NAME(roundKey,"roundKey");
}

::hx::Val Aes_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { return ::hx::Val( key ); }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"encrypt") ) { return ::hx::Val( encrypt_dyn() ); }
		if (HX_FIELD_EQ(inName,"decrypt") ) { return ::hx::Val( decrypt_dyn() ); }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"roundKey") ) { return ::hx::Val( roundKey ); }
	}
	return super::__Field(inName,inCallProp);
}

bool Aes_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 10:
		if (HX_FIELD_EQ(inName,"generateIV") ) { outValue = generateIV_dyn(); return true; }
	}
	return false;
}

::hx::Val Aes_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"key") ) { key=inValue.Cast<  ::haxe::io::Bytes >(); return inValue; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"roundKey") ) { roundKey=inValue.Cast< ::Array< int > >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void Aes_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("key",9f,89,51,00));
	outFields->push(HX_("roundKey",f1,ed,6c,e0));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo Aes_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::haxe::io::Bytes */ ,(int)offsetof(Aes_obj,key),HX_("key",9f,89,51,00)},
	{::hx::fsObject /* ::Array< int > */ ,(int)offsetof(Aes_obj,roundKey),HX_("roundKey",f1,ed,6c,e0)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *Aes_obj_sStaticStorageInfo = 0;
#endif

static ::String Aes_obj_sMemberFields[] = {
	HX_("key",9f,89,51,00),
	HX_("roundKey",f1,ed,6c,e0),
	HX_("encrypt",65,7e,9b,af),
	HX_("decrypt",4d,c8,cf,ec),
	::String(null()) };

::hx::Class Aes_obj::__mClass;

static ::String Aes_obj_sStaticFields[] = {
	HX_("generateIV",62,96,60,4e),
	::String(null())
};

void Aes_obj::__register()
{
	Aes_obj _hx_dummy;
	Aes_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.crypto.Aes",3c,50,cb,49);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Aes_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Aes_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(Aes_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< Aes_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Aes_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Aes_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
