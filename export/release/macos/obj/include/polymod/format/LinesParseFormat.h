#ifndef INCLUDED_polymod_format_LinesParseFormat
#define INCLUDED_polymod_format_LinesParseFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
HX_DECLARE_CLASS2(polymod,format,BaseParseFormat)
HX_DECLARE_CLASS2(polymod,format,EndLineType)
HX_DECLARE_CLASS2(polymod,format,LinesParseFormat)
HX_DECLARE_CLASS2(polymod,format,TextFileFormat)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES LinesParseFormat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef LinesParseFormat_obj OBJ_;
		LinesParseFormat_obj();

	public:
		enum { _hx_ClassId = 0x20bd5358 };

		void __construct( ::polymod::format::EndLineType endline);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.format.LinesParseFormat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.format.LinesParseFormat"); }
		static ::hx::ObjectPtr< LinesParseFormat_obj > __new( ::polymod::format::EndLineType endline);
		static ::hx::ObjectPtr< LinesParseFormat_obj > __alloc(::hx::Ctx *_hx_ctx, ::polymod::format::EndLineType endline);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~LinesParseFormat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("LinesParseFormat",2b,24,e8,4e); }

		 ::polymod::format::TextFileFormat format;
		 ::polymod::format::EndLineType endline;
		::Array< ::String > parse(::String str);
		::Dynamic parse_dyn();

		::String append(::String baseText,::String appendText,::String id);
		::Dynamic append_dyn();

		::String merge(::String baseText,::String mergeText,::String id);
		::Dynamic merge_dyn();

		::String print(::Array< ::String > lines);
		::Dynamic print_dyn();

		::String getEndl();
		::Dynamic getEndl_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_LinesParseFormat */ 
