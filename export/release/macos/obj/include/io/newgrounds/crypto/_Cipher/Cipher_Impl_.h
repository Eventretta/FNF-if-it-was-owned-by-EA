#ifndef INCLUDED_io_newgrounds_crypto__Cipher_Cipher_Impl_
#define INCLUDED_io_newgrounds_crypto__Cipher_Cipher_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(io,newgrounds,crypto,_Cipher,Cipher_Impl_)

namespace io{
namespace newgrounds{
namespace crypto{
namespace _Cipher{


class HXCPP_CLASS_ATTRIBUTES Cipher_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Cipher_Impl__obj OBJ_;
		Cipher_Impl__obj();

	public:
		enum { _hx_ClassId = 0x66b4d0a2 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="io.newgrounds.crypto._Cipher.Cipher_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"io.newgrounds.crypto._Cipher.Cipher_Impl_"); }

		inline static ::hx::ObjectPtr< Cipher_Impl__obj > __new() {
			::hx::ObjectPtr< Cipher_Impl__obj > __this = new Cipher_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Cipher_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			Cipher_Impl__obj *__this = (Cipher_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Cipher_Impl__obj), false, "io.newgrounds.crypto._Cipher.Cipher_Impl_"));
			*(void **)__this = Cipher_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Cipher_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Cipher_Impl_",0b,ed,f9,44); }

		static void __boot();
		static ::String NONE;
		static ::String AES_128;
		static ::String RC4;
		static  ::Dynamic generateEncrypter(::String this1, ::haxe::io::Bytes key);
		static ::Dynamic generateEncrypter_dyn();

		static  ::Dynamic generateEncrypterAndTestDecrypter(::String this1, ::haxe::io::Bytes key);
		static ::Dynamic generateEncrypterAndTestDecrypter_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _Cipher

#endif /* INCLUDED_io_newgrounds_crypto__Cipher_Cipher_Impl_ */ 
