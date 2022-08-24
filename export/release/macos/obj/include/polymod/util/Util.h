#ifndef INCLUDED_polymod_util_Util
#define INCLUDED_polymod_util_Util

#ifndef HXCPP_H
#include <hxcpp.h>
#endif

HX_DECLARE_CLASS0(Xml)
HX_DECLARE_CLASS2(polymod,format,ParseRules)
HX_DECLARE_CLASS2(polymod,fs,IFileSystem)
HX_DECLARE_CLASS2(polymod,util,Util)

namespace polymod{
namespace util{


class HXCPP_CLASS_ATTRIBUTES Util_obj : public ::hx::Object
{
	public:
		typedef ::hx::Object super;
		typedef Util_obj OBJ_;
		Util_obj();

	public:
		enum { _hx_ClassId = 0x7d31ad5a };

		void __construct();
		inline void *operator new(size_t inSize, bool inContainer=false,const char *inName="polymod.util.Util")
			{ return ::hx::Object::operator new(inSize,inContainer,inName); }
		inline void *operator new(size_t inSize, int extra)
			{ return ::hx::Object::operator new(inSize+extra,false,"polymod.util.Util"); }

		inline static ::hx::ObjectPtr< Util_obj > __new() {
			::hx::ObjectPtr< Util_obj > __this = new Util_obj();
			__this->__construct();
			return __this;
		}

		inline static ::hx::ObjectPtr< Util_obj > __alloc(::hx::Ctx *_hx_ctx) {
			Util_obj *__this = (Util_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(Util_obj), false, "polymod.util.Util"));
			*(void **)__this = Util_obj::_hx_vtable;
			return __this;
		}

		static void * _hx_vtable;
		static Dynamic __CreateEmpty();
		static Dynamic __Create(::hx::DynamicArray inArgs);
		//~Util_obj();

		HX_DO_RTTI_ALL;
		static bool __GetStatic(const ::String &inString, Dynamic &outValue, ::hx::PropertyAccess inCallProp);
		static void __register();
		bool _hx_isInstanceOf(int inClassId);
		::String __ToString() const { return HX_("Util",22,84,87,38); }

		static ::String mergeAndAppendText(::String baseText,::String id,::Array< ::String > dirs, ::Dynamic getModText,::Dynamic fileSystem, ::polymod::format::ParseRules parseRules);
		static ::Dynamic mergeAndAppendText_dyn();

		static ::String mergeText(::String baseText,::String id,::String theDir, ::Dynamic getModText, ::polymod::format::ParseRules parseRules);
		static ::Dynamic mergeText_dyn();

		static ::String appendText(::String baseText,::String id,::String theDir, ::Dynamic getModText, ::polymod::format::ParseRules parseRules);
		static ::Dynamic appendText_dyn();

		static ::String appendCSVOrTSV(::String baseText,::String appendText,::String id);
		static ::Dynamic appendCSVOrTSV_dyn();

		static ::String appendSpecialXML(::String a,::String b,::Array< ::String > headers,::Array< ::String > footers);
		static ::Dynamic appendSpecialXML_dyn();

		static ::String appendXML(::String a,::String b);
		static ::Dynamic appendXML_dyn();

		static ::String stripComments(::String txt);
		static ::Dynamic stripComments_dyn();

		static ::String stripPathPrefix(::String value,::String prefix);
		static ::Dynamic stripPathPrefix_dyn();

		static ::String trimLeadingWhiteSpace(::String txt);
		static ::Dynamic trimLeadingWhiteSpace_dyn();

		static ::String trimTrailingWhiteSpace(::String txt);
		static ::Dynamic trimTrailingWhiteSpace_dyn();

		static ::String stripXML(::String txt,::hx::Null< bool >  stripHeader,::hx::Null< bool >  stripFooter,::Array< ::String > headers,::Array< ::String > footers);
		static ::Dynamic stripXML_dyn();

		static ::String pathMerge(::String id,::String theDir);
		static ::Dynamic pathMerge_dyn();

		static ::String pathAppend(::String id,::String theDir);
		static ::Dynamic pathAppend_dyn();

		static ::String stripAssetsPrefix(::String id);
		static ::Dynamic stripAssetsPrefix_dyn();

		static ::String pathSpecial(::String id,::String special,::String theDir);
		static ::Dynamic pathSpecial_dyn();

		static ::String pathJoin(::String a,::String b);
		static ::Dynamic pathJoin_dyn();

		static ::String cleanSlashes(::String str);
		static ::Dynamic cleanSlashes_dyn();

		static ::String sl();
		static ::Dynamic sl_dyn();

		static  ::Xml copyXml( ::Xml data, ::Xml parent);
		static ::Dynamic copyXml_dyn();

		static ::String uCat(::String a,::String b);
		static ::Dynamic uCat_dyn();

		static ::String uCharAt(::String str,int index);
		static ::Dynamic uCharAt_dyn();

		static ::String uJoin(::Array< ::String > arr,::String token);
		static ::Dynamic uJoin_dyn();

		static ::String uCombine(::Array< ::String > arr);
		static ::Dynamic uCombine_dyn();

		static ::String uExtension(::String str,::hx::Null< bool >  lowerCase);
		static ::Dynamic uExtension_dyn();

		static int uIndexOf(::String str,::String substr, ::Dynamic startIndex);
		static ::Dynamic uIndexOf_dyn();

		static int uLastIndexOf(::String str,::String value, ::Dynamic startIndex);
		static ::Dynamic uLastIndexOf_dyn();

		static int uLength(::String str);
		static ::Dynamic uLength_dyn();

		static ::String uPathPop(::String str);
		static ::Dynamic uPathPop_dyn();

		static ::String uTrimFinalCharIf(::String str,::String match);
		static ::Dynamic uTrimFinalCharIf_dyn();

		static ::String uTrimFinalEndlines(::String str);
		static ::Dynamic uTrimFinalEndlines_dyn();

		static ::String uTrimFirstCharIf(::String str,::String match);
		static ::Dynamic uTrimFirstCharIf_dyn();

		static ::String uTrimFirstEndlines(::String str);
		static ::Dynamic uTrimFirstEndlines_dyn();

		static ::Array< ::String > uSplit(::String str,::String substr);
		static ::Dynamic uSplit_dyn();

		static ::String uSplitReplace(::String s,::String substr,::String by);
		static ::Dynamic uSplitReplace_dyn();

		static ::String uSubstr(::String str,int pos, ::Dynamic len);
		static ::Dynamic uSubstr_dyn();

		static ::String uSubstring(::String str,int startIndex, ::Dynamic endIndex);
		static ::Dynamic uSubstring_dyn();

};

} // end namespace polymod
} // end namespace util

#endif /* INCLUDED_polymod_util_Util */ 