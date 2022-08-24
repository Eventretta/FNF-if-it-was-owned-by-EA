#ifndef INCLUDED_io_newgrounds_crypto__Aes_PKCS7
#define INCLUDED_io_newgrounds_crypto__Aes_PKCS7

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(io,newgrounds,crypto,_Aes,PKCS7)

namespace io{
namespace newgrounds{
namespace crypto{
namespace _Aes{


class HXCPP_CLASS_ATTRIBUTES PKCS7_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef PKCS7_obj OBJ_;
		PKCS7_obj();

	public:
		enum { _hx_ClassId = 0x1bf7bd09 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="io.newgrounds.crypto._Aes.PKCS7")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"io.newgrounds.crypto._Aes.PKCS7"); }

		inline static ::hx::ObjectPtr< PKCS7_obj > __new() {
			::hx::ObjectPtr< PKCS7_obj > __this = new PKCS7_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< PKCS7_obj > __alloc(::hx::Ctx *_hx_ctx) {
			PKCS7_obj *__this = (PKCS7_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(PKCS7_obj), false, "io.newgrounds.crypto._Aes.PKCS7"));
			*(void **)__this = PKCS7_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~PKCS7_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("PKCS7",6c,88,d4,41); }

		static  ::haxe::io::Bytes pad( ::haxe::io::Bytes ciphertext);
		static ::Dynamic pad_dyn();

		static  ::haxe::io::Bytes unpad( ::haxe::io::Bytes encrypt);
		static ::Dynamic unpad_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _Aes

#endif /* INCLUDED_io_newgrounds_crypto__Aes_PKCS7 */ 
