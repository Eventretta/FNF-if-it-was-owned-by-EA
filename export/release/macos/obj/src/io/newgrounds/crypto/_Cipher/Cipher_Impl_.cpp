#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto_Aes
#include <io/newgrounds/crypto/Aes.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto_Rc4
#include <io/newgrounds/crypto/Rc4.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto__Cipher_Cipher_Impl_
#include <io/newgrounds/crypto/_Cipher/Cipher_Impl_.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_43c0fc81ed2066bd_18_generateEncrypter,"io.newgrounds.crypto._Cipher.Cipher_Impl_","generateEncrypter",0x00e9b8f1,"io.newgrounds.crypto._Cipher.Cipher_Impl_.generateEncrypter","io/newgrounds/crypto/Cipher.hx",18,0x170633ff)
HX_LOCAL_STACK_FRAME(_hx_pos_43c0fc81ed2066bd_43_generateEncrypterAndTestDecrypter,"io.newgrounds.crypto._Cipher.Cipher_Impl_","generateEncrypterAndTestDecrypter",0x5e276d02,"io.newgrounds.crypto._Cipher.Cipher_Impl_.generateEncrypterAndTestDecrypter","io/newgrounds/crypto/Cipher.hx",43,0x170633ff)
HX_LOCAL_STACK_FRAME(_hx_pos_43c0fc81ed2066bd_27_generateEncrypterAndTestDecrypter,"io.newgrounds.crypto._Cipher.Cipher_Impl_","generateEncrypterAndTestDecrypter",0x5e276d02,"io.newgrounds.crypto._Cipher.Cipher_Impl_.generateEncrypterAndTestDecrypter","io/newgrounds/crypto/Cipher.hx",27,0x170633ff)
HX_LOCAL_STACK_FRAME(_hx_pos_43c0fc81ed2066bd_7_boot,"io.newgrounds.crypto._Cipher.Cipher_Impl_","boot",0x2136dbde,"io.newgrounds.crypto._Cipher.Cipher_Impl_.boot","io/newgrounds/crypto/Cipher.hx",7,0x170633ff)
HX_LOCAL_STACK_FRAME(_hx_pos_43c0fc81ed2066bd_8_boot,"io.newgrounds.crypto._Cipher.Cipher_Impl_","boot",0x2136dbde,"io.newgrounds.crypto._Cipher.Cipher_Impl_.boot","io/newgrounds/crypto/Cipher.hx",8,0x170633ff)
HX_LOCAL_STACK_FRAME(_hx_pos_43c0fc81ed2066bd_9_boot,"io.newgrounds.crypto._Cipher.Cipher_Impl_","boot",0x2136dbde,"io.newgrounds.crypto._Cipher.Cipher_Impl_.boot","io/newgrounds/crypto/Cipher.hx",9,0x170633ff)
namespace io{
namespace newgrounds{
namespace crypto{
namespace _Cipher{

void Cipher_Impl__obj::__construct() { }

Dynamic Cipher_Impl__obj::__CreateEmpty() { return new Cipher_Impl__obj; }

void *Cipher_Impl__obj::_hx_vtable = 0;

Dynamic Cipher_Impl__obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Cipher_Impl__obj > _hx_result = new Cipher_Impl__obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Cipher_Impl__obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x66b4d0a2;
}

::String Cipher_Impl__obj::NONE;

::String Cipher_Impl__obj::AES_128;

::String Cipher_Impl__obj::RC4;

 ::Dynamic Cipher_Impl__obj::generateEncrypter(::String this1, ::haxe::io::Bytes key){
            	HX_GC_STACKFRAME(&_hx_pos_43c0fc81ed2066bd_18_generateEncrypter)
HXDLIN(  18)		::String _hx_switch_0 = this1;
            		if (  (_hx_switch_0==HX_("aes128",88,7a,3f,3c)) ){
HXLINE(  21)			return  ::io::newgrounds::crypto::Aes_obj::__alloc( HX_CTX ,key)->encrypt_dyn();
HXDLIN(  21)			goto _hx_goto_0;
            		}
            		if (  (_hx_switch_0==HX_("rc4",63,d7,56,00)) ){
HXLINE(  20)			return  ::io::newgrounds::crypto::Rc4_obj::__alloc( HX_CTX ,key)->crypt_dyn();
HXDLIN(  20)			goto _hx_goto_0;
            		}
            		/* default */{
HXLINE(  22)			return null();
            		}
            		_hx_goto_0:;
HXLINE(  18)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cipher_Impl__obj,generateEncrypter,return )

 ::Dynamic Cipher_Impl__obj::generateEncrypterAndTestDecrypter(::String this1, ::haxe::io::Bytes key){
            		HX_BEGIN_LOCAL_FUNC_S2(::hx::LocalFunc,_hx_Closure_0,::Array< ::Dynamic>,decrypter,::Array< ::Dynamic>,encrypter) HXARGC(1)
            		 ::haxe::io::Bytes _hx_run( ::haxe::io::Bytes bytes){
            			HX_GC_STACKFRAME(&_hx_pos_43c0fc81ed2066bd_43_generateEncrypterAndTestDecrypter)
HXLINE(  46)			 ::haxe::io::Bytes encrypted = ( ( ::haxe::io::Bytes)(encrypter->__get(0)(bytes)) );
HXLINE(  48)			 ::haxe::io::Bytes decrypted = ( ( ::haxe::io::Bytes)(decrypter->__get(0)(encrypted)) );
HXLINE(  50)			{
HXLINE(  50)				int _g = 0;
HXDLIN(  50)				int _g1 = bytes->length;
HXDLIN(  50)				while((_g < _g1)){
HXLINE(  50)					_g = (_g + 1);
HXDLIN(  50)					int i = (_g - 1);
HXLINE(  52)					if ((bytes->b->__get(i) != decrypted->b->__get(i))) {
HXLINE(  54)						::String _hx_tmp = ((HX_("expected:",c2,7a,f8,e9) + bytes->toString()) + HX_(", got:",e2,09,f0,48));
HXLINE(  53)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Reverse decryption did not match input, ",ce,14,d6,38) + (_hx_tmp + decrypted->toString()))));
            					}
            				}
            			}
HXLINE(  62)			return encrypted;
            		}
            		HX_END_LOCAL_FUNC1(return)

            	HX_GC_STACKFRAME(&_hx_pos_43c0fc81ed2066bd_27_generateEncrypterAndTestDecrypter)
HXLINE(  29)		::Array< ::Dynamic> encrypter = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  30)		::Array< ::Dynamic> decrypter = ::Array_obj< ::Dynamic>::__new(0);
HXLINE(  32)		::String _hx_switch_0 = this1;
            		if (  (_hx_switch_0==HX_("aes128",88,7a,3f,3c)) ){
HXLINE(  36)			 ::io::newgrounds::crypto::Aes aes =  ::io::newgrounds::crypto::Aes_obj::__alloc( HX_CTX ,key);
HXLINE(  37)			encrypter[0] = aes->encrypt_dyn();
HXLINE(  38)			decrypter[0] = aes->decrypt_dyn();
HXLINE(  35)			goto _hx_goto_2;
            		}
            		if (  (_hx_switch_0==HX_("rc4",63,d7,56,00)) ){
HXLINE(  34)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(HX_("Rc4 decryption not implemented",6d,07,5d,13)));
HXDLIN(  34)			goto _hx_goto_2;
            		}
            		/* default */{
HXLINE(  40)			return null();
            		}
            		_hx_goto_2:;
HXLINE(  43)		return  ::Dynamic(new _hx_Closure_0(decrypter,encrypter));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Cipher_Impl__obj,generateEncrypterAndTestDecrypter,return )


Cipher_Impl__obj::Cipher_Impl__obj()
{
}

bool Cipher_Impl__obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 17:
		if (HX_FIELD_EQ(inName,"generateEncrypter") ) { outValue = generateEncrypter_dyn(); return true; }
		break;
	case 33:
		if (HX_FIELD_EQ(inName,"generateEncrypterAndTestDecrypter") ) { outValue = generateEncrypterAndTestDecrypter_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Cipher_Impl__obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo Cipher_Impl__obj_sStaticStorageInfo[] = {
	{::hx::fsString,(void *) &Cipher_Impl__obj::NONE,HX_("NONE",b8,da,ca,33)},
	{::hx::fsString,(void *) &Cipher_Impl__obj::AES_128,HX_("AES_128",a7,d1,c5,2e)},
	{::hx::fsString,(void *) &Cipher_Impl__obj::RC4,HX_("RC4",63,73,3e,00)},
	{ ::hx::fsUnknown, 0, null()}
};
#endif

static void Cipher_Impl__obj_sMarkStatics(HX_MARK_PARAMS) {
	HX_MARK_MEMBER_NAME(Cipher_Impl__obj::NONE,"NONE");
	HX_MARK_MEMBER_NAME(Cipher_Impl__obj::AES_128,"AES_128");
	HX_MARK_MEMBER_NAME(Cipher_Impl__obj::RC4,"RC4");
};

#ifdef HXCPP_VISIT_ALLOCS
static void Cipher_Impl__obj_sVisitStatics(HX_VISIT_PARAMS) {
	HX_VISIT_MEMBER_NAME(Cipher_Impl__obj::NONE,"NONE");
	HX_VISIT_MEMBER_NAME(Cipher_Impl__obj::AES_128,"AES_128");
	HX_VISIT_MEMBER_NAME(Cipher_Impl__obj::RC4,"RC4");
};

#endif

::hx::Class Cipher_Impl__obj::__mClass;

static ::String Cipher_Impl__obj_sStaticFields[] = {
	HX_("NONE",b8,da,ca,33),
	HX_("AES_128",a7,d1,c5,2e),
	HX_("RC4",63,73,3e,00),
	HX_("generateEncrypter",1d,6c,1b,62),
	HX_("generateEncrypterAndTestDecrypter",2e,38,17,ef),
	::String(null())
};

void Cipher_Impl__obj::__register()
{
	Cipher_Impl__obj _hx_dummy;
	Cipher_Impl__obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.crypto._Cipher.Cipher_Impl_",42,28,50,a4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Cipher_Impl__obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mMarkFunc = Cipher_Impl__obj_sMarkStatics;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Cipher_Impl__obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Cipher_Impl__obj >;
#ifdef HXCPP_VISIT_ALLOCS
	__mClass->mVisitFunc = Cipher_Impl__obj_sVisitStatics;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Cipher_Impl__obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Cipher_Impl__obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

void Cipher_Impl__obj::__boot()
{
{
            	HX_STACKFRAME(&_hx_pos_43c0fc81ed2066bd_7_boot)
HXDLIN(   7)		NONE = HX_("none",b8,12,0a,49);
            	}
{
            	HX_STACKFRAME(&_hx_pos_43c0fc81ed2066bd_8_boot)
HXDLIN(   8)		AES_128 = HX_("aes128",88,7a,3f,3c);
            	}
{
            	HX_STACKFRAME(&_hx_pos_43c0fc81ed2066bd_9_boot)
HXDLIN(   9)		RC4 = HX_("rc4",63,d7,56,00);
            	}
}

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _Cipher
