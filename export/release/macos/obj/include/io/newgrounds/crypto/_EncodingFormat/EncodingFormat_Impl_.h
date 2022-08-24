#ifndef INCLUDED_io_newgrounds_crypto__EncodingFormat_EncodingFormat_Impl_
#define INCLUDED_io_newgrounds_crypto__EncodingFormat_EncodingFormat_Impl_

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS4(io,newgrounds,crypto,_EncodingFormat,EncodingFormat_Impl_)

namespace io{
namespace newgrounds{
namespace crypto{
namespace _EncodingFormat{


class HXCPP_CLASS_ATTRIBUTES EncodingFormat_Impl__obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef EncodingFormat_Impl__obj OBJ_;
		EncodingFormat_Impl__obj();

	public:
		enum { _hx_ClassId = 0x0d2a28e0 };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_"); }

		inline static ::hx::ObjectPtr< EncodingFormat_Impl__obj > __new() {
			::hx::ObjectPtr< EncodingFormat_Impl__obj > __this = new EncodingFormat_Impl__obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< EncodingFormat_Impl__obj > __alloc(::hx::Ctx *_hx_ctx) {
			EncodingFormat_Impl__obj *__this = (EncodingFormat_Impl__obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(EncodingFormat_Impl__obj), false, "io.newgrounds.crypto._EncodingFormat.EncodingFormat_Impl_"));
			*(void **)__this = EncodingFormat_Impl__obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~EncodingFormat_Impl__obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("EncodingFormat_Impl_",aa,44,29,67); }

		static void __boot();
		static ::String BASE_64;
		static ::String HEX;
		static ::String encode(::String this1, ::haxe::io::Bytes dataBytes);
		static ::Dynamic encode_dyn();

		static  ::haxe::io::Bytes decode(::String this1,::String data);
		static ::Dynamic decode_dyn();

};

} // end namespace io
} // end namespace newgrounds
} // end namespace crypto
} // end namespace _EncodingFormat

#endif /* INCLUDED_io_newgrounds_crypto__EncodingFormat_EncodingFormat_Impl_ */ 
