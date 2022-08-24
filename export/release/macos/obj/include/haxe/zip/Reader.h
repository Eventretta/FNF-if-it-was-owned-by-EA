#ifndef INCLUDED_haxe_zip_Reader
#define INCLUDED_haxe_zip_Reader

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Date)
HX_DECLARE_CLASS2(haxe,ds,List)
HX_DECLARE_CLASS2(haxe,io,Bytes)
HX_DECLARE_CLASS2(haxe,io,Input)
HX_DECLARE_CLASS2(haxe,zip,Reader)

namespace haxe{
namespace zip{


class HXCPP_CLASS_ATTRIBUTES Reader_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Reader_obj OBJ_;
		Reader_obj();

	public:
		enum { _hx_ClassId = 0x77d0ba9e };

		void __construct( ::haxe::io::Input i);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="haxe.zip.Reader")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"haxe.zip.Reader"); }
		static ::hx::ObjectPtr< Reader_obj > __new( ::haxe::io::Input i);
		static ::hx::ObjectPtr< Reader_obj > __alloc(::hx::Ctx *_hx_ctx, ::haxe::io::Input i);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Reader_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Reader",63,19,26,31); }

		static  ::haxe::ds::List readZip( ::haxe::io::Input i);
		static ::Dynamic readZip_dyn();

		static  ::haxe::io::Bytes unzip( ::Dynamic f);
		static ::Dynamic unzip_dyn();

		 ::haxe::io::Input i;
		 ::Date readZipDate();
		::Dynamic readZipDate_dyn();

		 ::haxe::ds::List readExtraFields(int length);
		::Dynamic readExtraFields_dyn();

		 ::Dynamic readEntryHeader();
		::Dynamic readEntryHeader_dyn();

		 ::haxe::ds::List read();
		::Dynamic read_dyn();

};

} // end namespace haxe
} // end namespace zip

#endif /* INCLUDED_haxe_zip_Reader */ 
