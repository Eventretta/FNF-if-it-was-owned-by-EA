#include <hxcpp.h>

#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_haxe_io_Bytes
#include <haxe/io/Bytes.h>
#endif
#ifndef INCLUDED_haxe_io_BytesBuffer
#include <haxe/io/BytesBuffer.h>
#endif
#ifndef INCLUDED_haxe_io_Error
#include <haxe/io/Error.h>
#endif
#ifndef INCLUDED_io_newgrounds_crypto__Aes_PKCS7
#include <io/newgrounds/crypto/_Aes/PKCS7.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_46d88ed1a934d3c3_442_pad,"io.newgrounds.crypto._Aes.PKCS7","pad",0xe2028a26,"io.newgrounds.crypto._Aes.PKCS7.pad","io/newgrounds/crypto/Aes.hx",442,0xa53cc523)
HX_LOCAL_STACK_FRAME(_hx_pos_46d88ed1a934d3c3_457_unpad,"io.newgrounds.crypto._Aes.PKCS7","unpad",0x38f7fc2d,"io.newgrounds.crypto._Aes.PKCS7.unpad","io/newgrounds/crypto/Aes.hx",457,0xa53cc523)
namespace io{
namespace newgrounds{
namespace crypto{
namespace _Aes{

void PKCS7_obj::__construct() { }

Dynamic PKCS7_obj::__CreateEmpty() { return new PKCS7_obj; }

void *PKCS7_obj::_hx_vtable = 0;

Dynamic PKCS7_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< PKCS7_obj > _hx_result = new PKCS7_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool PKCS7_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1bf7bd09;
}

 ::haxe::io::Bytes PKCS7_obj::pad( ::haxe::io::Bytes ciphertext){
            	HX_GC_STACKFRAME(&_hx_pos_46d88ed1a934d3c3_442_pad)
HXLINE( 447)		 ::haxe::io::BytesBuffer buffer =  ::haxe::io::BytesBuffer_obj::__alloc( HX_CTX );
HXLINE( 448)		{
HXLINE( 448)			int len = ciphertext->length;
HXDLIN( 448)			bool _hx_tmp;
HXDLIN( 448)			if ((len >= 0)) {
HXLINE( 448)				_hx_tmp = (len > ciphertext->length);
            			}
            			else {
HXLINE( 448)				_hx_tmp = true;
            			}
HXDLIN( 448)			if (_hx_tmp) {
HXLINE( 448)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(::haxe::io::Error_obj::OutsideBounds_dyn()));
            			}
HXDLIN( 448)			::Array< unsigned char > b1 = buffer->b;
HXDLIN( 448)			::Array< unsigned char > b2 = ciphertext->b;
HXDLIN( 448)			{
HXLINE( 448)				int _g = 0;
HXDLIN( 448)				int _g1 = len;
HXDLIN( 448)				while((_g < _g1)){
HXLINE( 448)					_g = (_g + 1);
HXDLIN( 448)					int i = (_g - 1);
HXDLIN( 448)					buffer->b->push(b2->__get(i));
            				}
            			}
            		}
HXLINE( 450)		int padding = (16 - ::hx::Mod(ciphertext->length,16));
HXLINE( 451)		{
HXLINE( 451)			int _g2 = 0;
HXDLIN( 451)			int _g3 = padding;
HXDLIN( 451)			while((_g2 < _g3)){
HXLINE( 451)				_g2 = (_g2 + 1);
HXDLIN( 451)				int i = (_g2 - 1);
HXLINE( 452)				buffer->b->push((padding & 255));
            			}
            		}
HXLINE( 454)		return buffer->getBytes();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PKCS7_obj,pad,return )

 ::haxe::io::Bytes PKCS7_obj::unpad( ::haxe::io::Bytes encrypt){
            	HX_STACKFRAME(&_hx_pos_46d88ed1a934d3c3_457_unpad)
HXLINE( 459)		int padding = ( (int)(encrypt->b->__get((encrypt->length - 1))) );
HXLINE( 460)		if ((padding > encrypt->length)) {
HXLINE( 461)			HX_STACK_DO_THROW(::haxe::Exception_obj::thrown(((((HX_("Cannot remove ",5f,81,1b,10) + padding) + HX_(" bytes, because message is ",a4,6a,4e,45)) + encrypt->length) + HX_(" bytes",4b,94,03,89))));
            		}
HXLINE( 463)		int block = (encrypt->length - padding);
HXLINE( 464)		{
HXLINE( 464)			int _g = block;
HXDLIN( 464)			int _g1 = encrypt->length;
HXDLIN( 464)			while((_g < _g1)){
HXLINE( 464)				_g = (_g + 1);
HXDLIN( 464)				int i = (_g - 1);
HXLINE( 466)				if ((encrypt->b->__get(i) != padding)) {
HXLINE( 467)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((((((HX_("Invalid padding value. Got ",3f,c8,3b,20) + encrypt->b->__get(i)) + HX_(", expected ",b4,e5,81,19)) + padding) + HX_(" at position ",0a,c2,01,e0)) + i)));
            				}
            			}
            		}
HXLINE( 470)		return encrypt->sub(0,block);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(PKCS7_obj,unpad,return )


PKCS7_obj::PKCS7_obj()
{
}

bool PKCS7_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 3:
		if (HX_FIELD_EQ(inName,"pad") ) { outValue = pad_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"unpad") ) { outValue = unpad_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *PKCS7_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *PKCS7_obj_sStaticStorageInfo = 0;
#endif

::hx::Class PKCS7_obj::__mClass;

static ::String PKCS7_obj_sStaticFields[] = {
	HX_("pad",53,51,55,00),
	HX_("unpad",9a,a8,ec,a6),
	::String(null())
};

void PKCS7_obj::__register()
{
	PKCS7_obj _hx_dummy;
	PKCS7_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("io.newgrounds.crypto._Aes.PKCS7",c1,f3,79,93);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &PKCS7_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(PKCS7_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< PKCS7_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = PKCS7_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = PKCS7_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _Aes
