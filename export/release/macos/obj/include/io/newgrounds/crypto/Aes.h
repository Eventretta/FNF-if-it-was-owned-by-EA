#ifndef INCLUDED_io_newgrounds_crypto_Aes
#define INCLUDED_io_newgrounds_crypto_Aes

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS3(io,newgrounds,crypto,Aes)

namespace io{
namespace newgrounds{
namespace crypto{


class HXCPP_CLASS_ATTRIBUTES Aes_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Aes_obj OBJ_;
		Aes_obj();

	public:
		enum { _hx_ClassId = 0x6492873c };

		void __construct( ::haxe::io::Bytes key);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="io.newgrounds.crypto.Aes")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"io.newgrounds.crypto.Aes"); }
		static ::hx::ObjectPtr< Aes_obj > __new( ::haxe::io::Bytes key);
		static ::hx::ObjectPtr< Aes_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Bytes key);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Aes_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Aes",ef,aa,31,00); }

		static  ::haxe::io::Bytes generateIV(::hx::Null< int >  bytes);
		static ::Dynamic generateIV_dyn();

		 ::haxe::io::Bytes key;
		::Array< int > roundKey;
		 ::haxe::io::Bytes encrypt( ::haxe::io::Bytes data);
		::Dynamic encrypt_dyn();

		 ::haxe::io::Bytes decrypt( ::haxe::io::Bytes data);
		::Dynamic decrypt_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto

#endif /* INCLUDED_io_newgrounds_crypto_Aes */ 
