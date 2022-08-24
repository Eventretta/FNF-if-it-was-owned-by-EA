#ifndef INCLUDED_polymod_format_CSVParseFormat
#define INCLUDED_polymod_format_CSVParseFormat

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
HX_DECLARE_CLASS2(polymod,format,BaseParseFormat)
HX_DECLARE_CLASS2(polymod,format,CSV)
HX_DECLARE_CLASS2(polymod,format,CSVParseFormat)
HX_DECLARE_CLASS2(polymod,format,TextFileFormat)

namespace polymod{
namespace format{


class HXCPP_CLASS_ATTRIBUTES CSVParseFormat_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef CSVParseFormat_obj OBJ_;
		CSVParseFormat_obj();

	public:
		enum { _hx_ClassId = 0x1a821905 };

		void __construct(::String delimeter,bool quotedCells);
		inline void *operator new(size_t inSize, bool inContainer=true,const char *inName="polymod.format.CSVParseFormat")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,true,"polymod.format.CSVParseFormat"); }
		static ::hx::ObjectPtr< CSVParseFormat_obj > __new(::String delimeter,bool quotedCells);
		static ::hx::ObjectPtr< CSVParseFormat_obj > __alloc(::hx::Ctx *_hx_ctx,::String delimeter,bool quotedCells);
		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~CSVParseFormat_obj();

		HX_DO_RTTI_ALL;
		::hx::Val __Field(const ::String &inString, ::hx::PropertyAccess inCallProp);
		::hx::Val __SetField(const ::String &inString,const ::hx::Val &inValue, ::hx::PropertyAccess inCallProp);
		void __GetFields(Array< ::String> &outFields);
		static void __register();
		void __Mark(HX_MARK_PARAMS);
		void __Visit(HX_VISIT_PARAMS);
		bool _hx_isInstanceOf(int inClassId);
		void *_hx_getInterface(int inHash);
		::String __ToString() const { return HX_("CSVParseFormat",c4,29,12,04); }

		 ::polymod::format::TextFileFormat format;
		bool isSimpleMode;
		::String delimeter;
		bool quotedCells;
		bool lookForHeaders;
		bool get_isSimpleMode();
		::Dynamic get_isSimpleMode_dyn();

		 ::polymod::format::CSV parse(::String str);
		::Dynamic parse_dyn();

		::String append(::String baseText,::String appendText,::String id);
		::Dynamic append_dyn();

		::String merge(::String baseText,::String mergeText,::String id);
		::Dynamic merge_dyn();

		::String print( ::polymod::format::CSV csv);
		::Dynamic print_dyn();

};

} // end namespace polymod
} // end namespace format

#endif /* INCLUDED_polymod_format_CSVParseFormat */ 
