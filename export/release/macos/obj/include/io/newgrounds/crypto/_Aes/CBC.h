#ifndef INCLUDED_io_newgrounds_crypto__Aes_CBC
#define INCLUDED_io_newgrounds_crypto__Aes_CBC

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(io,newgrounds,crypto,Aes)
HX_DECLARE_CLASS4(io,newgrounds,crypto,_Aes,CBC)

namespace io{
namespace newgrounds{
namespace crypto{
namespace _Aes{


class HXCPP_CLASS_ATTRIBUTES CBC_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CBC_obj OBJ_;
		CBC_obj();

	public:
		enum { _hx_ClassId = 0x147f8059 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="io.newgrounds.crypto._Aes.CBC")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"io.newgrounds.crypto._Aes.CBC"); }

		inline static ::hx::ObjectPtr< CBC_obj > __new() {
			::hx::ObjectPtr< CBC_obj > __this = new CBC_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< CBC_obj > __alloc(::hx::Ctx *_hx_ctx) {
			CBC_obj *__this = (CBC_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CBC_obj), false, "io.newgrounds.crypto._Aes.CBC"));
			*(void **)__this = CBC_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CBC_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static bool __SetStatic(const ::String &inString, Dynamic &ioValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("CBC",c4,10,33,00); }

		static void __boot();
		static ::Array< int > SBOX;
		static ::Array< int > RSBOX;
		static ::Array< int > POWER3;
		static ::Array< int > LOG3;
		static ::Array< int > RCON;
		static int BLOCK_SIZE;
		static int NB;
		static ::Array< int > keyExpansion( ::haxe::io::Bytes key);
		static ::Dynamic keyExpansion_dyn();

		static ::Array< int > rotWord(::Array< int > w);
		static ::Dynamic rotWord_dyn();

		static ::Array< int > subWord(::Array< int > w);
		static ::Dynamic subWord_dyn();

		static  ::haxe::io::Bytes encrypt( ::haxe::io::Bytes src, ::haxe::io::Bytes iv, ::io::newgrounds::crypto::Aes aes);
		static ::Dynamic encrypt_dyn();

		static  ::haxe::io::Bytes decrypt( ::haxe::io::Bytes src, ::haxe::io::Bytes iv, ::io::newgrounds::crypto::Aes aes);
		static ::Dynamic decrypt_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _Aes

#endif /* INCLUDED_io_newgrounds_crypto__Aes_CBC */ 
