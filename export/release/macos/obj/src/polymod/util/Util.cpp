#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_Xml
#include <Xml.h>
#endif
#ifndef INCLUDED__Xml_XmlType_Impl_
#include <_Xml/XmlType_Impl_.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_PolymodConfig
#include <polymod/PolymodConfig.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_ParseRules
#include <polymod/format/ParseRules.h>
#endif
#ifndef INCLUDED_polymod_fs_IFileSystem
#include <polymod/fs/IFileSystem.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_44_mergeAndAppendText,"polymod.util.Util","mergeAndAppendText",0x67a3775e,"polymod.util.Util.mergeAndAppendText","polymod/util/Util.hx",44,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_75_mergeText,"polymod.util.Util","mergeText",0x57ba76ad,"polymod.util.Util.mergeText","polymod/util/Util.hx",75,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_100_appendText,"polymod.util.Util","appendText",0x7713f37f,"polymod.util.Util.appendText","polymod/util/Util.hx",100,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_119_appendCSVOrTSV,"polymod.util.Util","appendCSVOrTSV",0x2835cee0,"polymod.util.Util.appendCSVOrTSV","polymod/util/Util.hx",119,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_144_appendSpecialXML,"polymod.util.Util","appendSpecialXML",0x73990970,"polymod.util.Util.appendSpecialXML","polymod/util/Util.hx",144,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_158_appendXML,"polymod.util.Util","appendXML",0x02d76b45,"polymod.util.Util.appendXML","polymod/util/Util.hx",158,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_168_stripComments,"polymod.util.Util","stripComments",0x58071354,"polymod.util.Util.stripComments","polymod/util/Util.hx",168,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_184_stripPathPrefix,"polymod.util.Util","stripPathPrefix",0x8fa3bf37,"polymod.util.Util.stripPathPrefix","polymod/util/Util.hx",184,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_196_trimLeadingWhiteSpace,"polymod.util.Util","trimLeadingWhiteSpace",0x8424d7a9,"polymod.util.Util.trimLeadingWhiteSpace","polymod/util/Util.hx",196,0xa14dd688)
static const ::String _hx_array_data_e4da7d96_13[] = {
	HX_("\r",0d,00,00,00),HX_("\n",0a,00,00,00),HX_(" ",20,00,00,00),HX_("\t",09,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_211_trimTrailingWhiteSpace,"polymod.util.Util","trimTrailingWhiteSpace",0xf0555eb3,"polymod.util.Util.trimTrailingWhiteSpace","polymod/util/Util.hx",211,0xa14dd688)
static const ::String _hx_array_data_e4da7d96_17[] = {
	HX_("\r",0d,00,00,00),HX_("\n",0a,00,00,00),HX_(" ",20,00,00,00),HX_("\t",09,00,00,00),
};
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_227_stripXML,"polymod.util.Util","stripXML",0x7ce10bb7,"polymod.util.Util.stripXML","polymod/util/Util.hx",227,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_284_pathMerge,"polymod.util.Util","pathMerge",0xdef3b5fb,"polymod.util.Util.pathMerge","polymod/util/Util.hx",284,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_289_pathAppend,"polymod.util.Util","pathAppend",0xbe17a937,"polymod.util.Util.pathAppend","polymod/util/Util.hx",289,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_293_stripAssetsPrefix,"polymod.util.Util","stripAssetsPrefix",0x41146495,"polymod.util.Util.stripAssetsPrefix","polymod/util/Util.hx",293,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_302_pathSpecial,"polymod.util.Util","pathSpecial",0x2c60243c,"polymod.util.Util.pathSpecial","polymod/util/Util.hx",302,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_313_pathJoin,"polymod.util.Util","pathJoin",0xdb757a07,"polymod.util.Util.pathJoin","polymod/util/Util.hx",313,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_330_cleanSlashes,"polymod.util.Util","cleanSlashes",0xd056153a,"polymod.util.Util.cleanSlashes","polymod/util/Util.hx",330,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_338_sl,"polymod.util.Util","sl",0x225af071,"polymod.util.Util.sl","polymod/util/Util.hx",338,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_343_copyXml,"polymod.util.Util","copyXml",0x532c6e4a,"polymod.util.Util.copyXml","polymod/util/Util.hx",343,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_391_uCat,"polymod.util.Util","uCat",0xa4805479,"polymod.util.Util.uCat","polymod/util/Util.hx",391,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_403_uCharAt,"polymod.util.Util","uCharAt",0xfcfcb8e6,"polymod.util.Util.uCharAt","polymod/util/Util.hx",403,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_408_uJoin,"polymod.util.Util","uJoin",0x5074aa27,"polymod.util.Util.uJoin","polymod/util/Util.hx",408,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_424_uCombine,"polymod.util.Util","uCombine",0x0afe7862,"polymod.util.Util.uCombine","polymod/util/Util.hx",424,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_434_uExtension,"polymod.util.Util","uExtension",0x84fa6022,"polymod.util.Util.uExtension","polymod/util/Util.hx",434,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_449_uIndexOf,"polymod.util.Util","uIndexOf",0x718f96ac,"polymod.util.Util.uIndexOf","polymod/util/Util.hx",449,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_458_uLastIndexOf,"polymod.util.Util","uLastIndexOf",0x5cdb7876,"polymod.util.Util.uLastIndexOf","polymod/util/Util.hx",458,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_467_uLength,"polymod.util.Util","uLength",0xe48ed463,"polymod.util.Util.uLength","polymod/util/Util.hx",467,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_472_uPathPop,"polymod.util.Util","uPathPop",0x9a48d2cf,"polymod.util.Util.uPathPop","polymod/util/Util.hx",472,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_485_uTrimFinalCharIf,"polymod.util.Util","uTrimFinalCharIf",0x396afb8a,"polymod.util.Util.uTrimFinalCharIf","polymod/util/Util.hx",485,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_497_uTrimFinalEndlines,"polymod.util.Util","uTrimFinalEndlines",0xe685f73b,"polymod.util.Util.uTrimFinalEndlines","polymod/util/Util.hx",497,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_518_uTrimFirstCharIf,"polymod.util.Util","uTrimFirstCharIf",0xd7685bc4,"polymod.util.Util.uTrimFirstCharIf","polymod/util/Util.hx",518,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_530_uTrimFirstEndlines,"polymod.util.Util","uTrimFirstEndlines",0x06c759f5,"polymod.util.Util.uTrimFirstEndlines","polymod/util/Util.hx",530,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_555_uSplit,"polymod.util.Util","uSplit",0x44e6e9fd,"polymod.util.Util.uSplit","polymod/util/Util.hx",555,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_560_uSplitReplace,"polymod.util.Util","uSplitReplace",0xad0c6fb7,"polymod.util.Util.uSplitReplace","polymod/util/Util.hx",560,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_588_uSubstr,"polymod.util.Util","uSubstr",0xdf922eae,"polymod.util.Util.uSubstr","polymod/util/Util.hx",588,0xa14dd688)
HX_LOCAL_STACK_FRAME(_hx_pos_ed681bbd235d58c2_597_uSubstring,"polymod.util.Util","uSubstring",0x82d1bef4,"polymod.util.Util.uSubstring","polymod/util/Util.hx",597,0xa14dd688)
namespace polymod{
namespace util{

void Util_obj::__construct() { }

Dynamic Util_obj::__CreateEmpty() { return new Util_obj; }

void *Util_obj::_hx_vtable = 0;

Dynamic Util_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< Util_obj > _hx_result = new Util_obj();
	_hx_result->__construct();
	return _hx_result;
}

bool Util_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x7d31ad5a;
}

::String Util_obj::mergeAndAppendText(::String baseText,::String id,::Array< ::String > dirs, ::Dynamic getModText,::Dynamic fileSystem, ::polymod::format::ParseRules parseRules){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_44_mergeAndAppendText)
HXLINE(  45)		::String text = baseText;
HXLINE(  47)		{
HXLINE(  47)			int _g = 0;
HXDLIN(  47)			while((_g < dirs->length)){
HXLINE(  47)				::String d = dirs->__get(_g);
HXDLIN(  47)				_g = (_g + 1);
HXLINE(  49)				::String theDir = d;
HXDLIN(  49)				if (::hx::IsNull( theDir )) {
HXLINE(  49)					theDir = HX_("",00,00,00,00);
            				}
HXDLIN(  49)				if (::polymod::fs::IFileSystem_obj::exists(fileSystem,::polymod::util::Util_obj::pathSpecial(id,::polymod::PolymodConfig_obj::get_mergeFolder(),theDir))) {
HXLINE(  51)					text = ::polymod::util::Util_obj::mergeText(text,id,d,getModText,parseRules);
            				}
HXLINE(  53)				::String theDir1 = d;
HXDLIN(  53)				if (::hx::IsNull( theDir1 )) {
HXLINE(  53)					theDir1 = HX_("",00,00,00,00);
            				}
HXDLIN(  53)				if (::polymod::fs::IFileSystem_obj::exists(fileSystem,::polymod::util::Util_obj::pathSpecial(id,::polymod::PolymodConfig_obj::get_appendFolder(),theDir1))) {
HXLINE(  55)					text = ::polymod::util::Util_obj::appendText(text,id,d,getModText,parseRules);
            				}
            			}
            		}
HXLINE(  59)		return text;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC6(Util_obj,mergeAndAppendText,return )

::String Util_obj::mergeText(::String baseText,::String id,::String __o_theDir, ::Dynamic getModText, ::polymod::format::ParseRules parseRules){
            		::String theDir = __o_theDir;
            		if (::hx::IsNull(__o_theDir)) theDir = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_75_mergeText)
HXLINE(  76)		::String extension = ::polymod::util::Util_obj::uExtension(id,true);
HXLINE(  77)		::String id1 = id;
HXDLIN(  77)		if ((::polymod::util::Util_obj::uIndexOf(id1,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE(  77)			id1 = ::polymod::util::Util_obj::uSubstring(id1,7,null());
            		}
HXDLIN(  77)		id = id1;
HXLINE(  78)		::String mergeFile = ::polymod::PolymodConfig_obj::get_mergeFolder();
HXDLIN(  78)		::String mergeFile1 = ((mergeFile + ::polymod::util::Util_obj::sl()) + id);
HXLINE(  80)		::Dynamic format = parseRules->get(id);
HXLINE(  81)		if (::hx::IsNull( format )) {
HXLINE(  84)			format = parseRules->get(extension);
            		}
HXLINE(  86)		if (::hx::IsNotNull( format )) {
HXLINE(  88)			::String mergeText = ( (::String)(getModText(mergeFile1,theDir)) );
HXLINE(  89)			return ::polymod::format::BaseParseFormat_obj::merge(format,baseText,mergeText,id);
            		}
            		else {
HXLINE(  93)			::polymod::Polymod_obj::error(HX_("merge_error",c1,8f,ea,85),((((HX_("Could not merge file (",38,a5,87,a2) + id) + HX_("), no parse format was specified for extension (",ef,41,09,3b)) + extension) + HX_(").",e5,23,00,00)),null());
HXLINE(  94)			return baseText;
            		}
HXLINE(  86)		return null();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Util_obj,mergeText,return )

::String Util_obj::appendText(::String baseText,::String id,::String theDir, ::Dynamic getModText, ::polymod::format::ParseRules parseRules){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_100_appendText)
HXLINE( 101)		::String extension = ::polymod::util::Util_obj::uExtension(id,true);
HXLINE( 102)		::String id1 = id;
HXDLIN( 102)		if ((::polymod::util::Util_obj::uIndexOf(id1,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE( 102)			id1 = ::polymod::util::Util_obj::uSubstring(id1,7,null());
            		}
HXDLIN( 102)		id = id1;
HXLINE( 104)		::Dynamic format = parseRules->get(id);
HXLINE( 105)		if (::hx::IsNull( format )) {
HXLINE( 108)			format = parseRules->get(extension);
            		}
HXLINE( 110)		if (::hx::IsNotNull( format )) {
HXLINE( 112)			::String appendText = ( (::String)(getModText(::polymod::util::Util_obj::pathJoin(::polymod::PolymodConfig_obj::get_appendFolder(),id),theDir)) );
HXLINE( 113)			return ::polymod::format::BaseParseFormat_obj::append(format,baseText,appendText,id);
            		}
HXLINE( 115)		return baseText;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Util_obj,appendText,return )

::String Util_obj::appendCSVOrTSV(::String baseText,::String appendText,::String id){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_119_appendCSVOrTSV)
HXLINE( 120)		::String lastChar = ::polymod::util::Util_obj::uCharAt(baseText,(::polymod::util::Util_obj::uLength(baseText) - 1));
HXLINE( 121)		::String lastLastChar = ::polymod::util::Util_obj::uCharAt(baseText,(::polymod::util::Util_obj::uLength(baseText) - 1));
HXLINE( 122)		::String joiner = HX_("",00,00,00,00);
HXLINE( 123)		::String endLine = HX_("\n",0a,00,00,00);
HXLINE( 124)		int crIndex = ::polymod::util::Util_obj::uIndexOf(baseText,HX_("\r",0d,00,00,00),null());
HXLINE( 125)		int lfIndex = ::polymod::util::Util_obj::uIndexOf(baseText,HX_("\n",0a,00,00,00),null());
HXLINE( 127)		bool _hx_tmp;
HXDLIN( 127)		if ((crIndex != -1)) {
HXLINE( 127)			_hx_tmp = (lfIndex == (crIndex + 1));
            		}
            		else {
HXLINE( 127)			_hx_tmp = false;
            		}
HXDLIN( 127)		if (_hx_tmp) {
HXLINE( 129)			endLine = HX_("\r\n",5d,0b,00,00);
            		}
HXLINE( 132)		if ((lastChar != HX_("\n",0a,00,00,00))) {
HXLINE( 134)			joiner = endLine;
            		}
HXLINE( 137)		::String otherEndline;
HXDLIN( 137)		if ((endLine == HX_("\n",0a,00,00,00))) {
HXLINE( 137)			otherEndline = HX_("\r\n",5d,0b,00,00);
            		}
            		else {
HXLINE( 137)			otherEndline = HX_("\n",0a,00,00,00);
            		}
HXLINE( 138)		appendText = ::polymod::util::Util_obj::uSplitReplace(appendText,otherEndline,endLine);
HXLINE( 140)		return ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(3)->init(0,baseText)->init(1,joiner)->init(2,appendText));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,appendCSVOrTSV,return )

::String Util_obj::appendSpecialXML(::String a,::String b,::Array< ::String > headers,::Array< ::String > footers){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_144_appendSpecialXML)
HXLINE( 145)		a = ::polymod::util::Util_obj::stripXML(a,true,true,headers,footers);
HXLINE( 146)		b = ::polymod::util::Util_obj::stripXML(b,true,true,headers,footers);
HXLINE( 148)		::String txt = HX_("<?xml version=\"1.0\" encoding=\"utf-8\" ?>",b7,30,4d,85);
HXLINE( 149)		txt = ::polymod::util::Util_obj::uCat(txt,HX_("<data>",18,b5,f1,d1));
HXLINE( 150)		txt = ::polymod::util::Util_obj::uCat(txt,a);
HXLINE( 151)		txt = ::polymod::util::Util_obj::uCat(txt,b);
HXLINE( 152)		txt = ::polymod::util::Util_obj::uCat(txt,HX_("</data>",81,d9,55,5e));
HXLINE( 154)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC4(Util_obj,appendSpecialXML,return )

::String Util_obj::appendXML(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_158_appendXML)
HXLINE( 159)		a = ::polymod::util::Util_obj::stripXML(a,false,true,null(),null());
HXLINE( 160)		b = ::polymod::util::Util_obj::stripXML(b,true,false,null(),null());
HXLINE( 162)		::String txt = ::polymod::util::Util_obj::uCat(a,b);
HXLINE( 164)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,appendXML,return )

::String Util_obj::stripComments(::String txt){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_168_stripComments)
HXLINE( 169)		int start = ::polymod::util::Util_obj::uIndexOf(txt,HX_("<!--",05,ff,c1,27),null());
HXLINE( 170)		int end = ::polymod::util::Util_obj::uIndexOf(txt,HX_("-->",de,4c,22,00),null());
HXLINE( 171)		while(true){
HXLINE( 171)			bool _hx_tmp;
HXDLIN( 171)			if ((start != -1)) {
HXLINE( 171)				_hx_tmp = (end != -1);
            			}
            			else {
HXLINE( 171)				_hx_tmp = false;
            			}
HXDLIN( 171)			if (!(_hx_tmp)) {
HXLINE( 171)				goto _hx_goto_7;
            			}
HXLINE( 173)			int len = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 174)			::String before = ::polymod::util::Util_obj::uSubstr(txt,0,start);
HXLINE( 175)			::String after = ::polymod::util::Util_obj::uSubstr(txt,(end + 3),(len - (end + 3)));
HXLINE( 176)			txt = ::polymod::util::Util_obj::uCat(before,after);
HXLINE( 177)			start = ::polymod::util::Util_obj::uIndexOf(txt,HX_("<!--",05,ff,c1,27),null());
HXLINE( 178)			end = ::polymod::util::Util_obj::uIndexOf(txt,HX_("-->",de,4c,22,00),null());
            		}
            		_hx_goto_7:;
HXLINE( 180)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,stripComments,return )

::String Util_obj::stripPathPrefix(::String value,::String prefix){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_184_stripPathPrefix)
HXLINE( 185)		::String result = value;
HXLINE( 186)		if ((result.indexOf(prefix,null()) == 0)) {
HXLINE( 187)			result = result.substr(prefix.length,null());
            		}
HXLINE( 189)		if ((result.indexOf(HX_("/",2f,00,00,00),null()) == 0)) {
HXLINE( 190)			result = result.substr(1,null());
            		}
HXLINE( 192)		return result;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,stripPathPrefix,return )

::String Util_obj::trimLeadingWhiteSpace(::String txt){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_196_trimLeadingWhiteSpace)
HXLINE( 197)		::Array< ::String > white = ::Array_obj< ::String >::fromData( _hx_array_data_e4da7d96_13,4);
HXLINE( 198)		int len = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 199)		{
HXLINE( 199)			int _g = 0;
HXDLIN( 199)			while((_g < white->length)){
HXLINE( 199)				::String w = white->__get(_g);
HXDLIN( 199)				_g = (_g + 1);
HXLINE( 201)				while((::polymod::util::Util_obj::uIndexOf(txt,w,null()) == 0)){
HXLINE( 203)					txt = ::polymod::util::Util_obj::uSubstr(txt,1,(len - 1));
HXLINE( 204)					len = (len - 1);
            				}
            			}
            		}
HXLINE( 207)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,trimLeadingWhiteSpace,return )

::String Util_obj::trimTrailingWhiteSpace(::String txt){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_211_trimTrailingWhiteSpace)
HXLINE( 212)		::Array< ::String > white = ::Array_obj< ::String >::fromData( _hx_array_data_e4da7d96_17,4);
HXLINE( 213)		int len = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 214)		{
HXLINE( 214)			int _g = 0;
HXDLIN( 214)			while((_g < white->length)){
HXLINE( 214)				::String w = white->__get(_g);
HXDLIN( 214)				_g = (_g + 1);
HXLINE( 216)				while((::polymod::util::Util_obj::uCharAt(txt,(len - 1)) == w)){
HXLINE( 218)					txt = ::polymod::util::Util_obj::uSubstr(txt,0,(len - 1));
HXLINE( 219)					len = (len - 1);
            				}
            			}
            		}
HXLINE( 222)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,trimTrailingWhiteSpace,return )

::String Util_obj::stripXML(::String txt,::hx::Null< bool >  __o_stripHeader,::hx::Null< bool >  __o_stripFooter,::Array< ::String > headers,::Array< ::String > footers){
            		bool stripHeader = __o_stripHeader.Default(true);
            		bool stripFooter = __o_stripFooter.Default(true);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_227_stripXML)
HXLINE( 228)		txt = ::polymod::util::Util_obj::stripComments(txt);
HXLINE( 230)		if (stripHeader) {
HXLINE( 232)			if ((::polymod::util::Util_obj::uIndexOf(txt,HX_("<?xml",34,ad,0a,b6),null()) == 0)) {
HXLINE( 234)				int i = ::polymod::util::Util_obj::uIndexOf(txt,HX_(">",3e,00,00,00),null());
HXLINE( 235)				txt = ::polymod::util::Util_obj::uSubstr(txt,(i + 1),(::polymod::util::Util_obj::uLength(txt) - (i + 1)));
HXLINE( 236)				txt = ::polymod::util::Util_obj::trimLeadingWhiteSpace(txt);
            			}
HXLINE( 238)			if ((::polymod::util::Util_obj::uIndexOf(txt,HX_("<data",66,24,6e,ce),null()) == 0)) {
HXLINE( 240)				int i = ::polymod::util::Util_obj::uIndexOf(txt,HX_(">",3e,00,00,00),null());
HXLINE( 241)				txt = ::polymod::util::Util_obj::uSubstr(txt,(i + 1),(::polymod::util::Util_obj::uLength(txt) - (i + 1)));
HXLINE( 242)				txt = ::polymod::util::Util_obj::trimLeadingWhiteSpace(txt);
            			}
HXLINE( 244)			if (::hx::IsNotNull( headers )) {
HXLINE( 246)				int _g = 0;
HXDLIN( 246)				while((_g < headers->length)){
HXLINE( 246)					::String header = headers->__get(_g);
HXDLIN( 246)					_g = (_g + 1);
HXLINE( 248)					if ((::polymod::util::Util_obj::uIndexOf(txt,header,null()) == 0)) {
HXLINE( 250)						int i = ::polymod::util::Util_obj::uIndexOf(txt,HX_(">",3e,00,00,00),null());
HXLINE( 251)						txt = ::polymod::util::Util_obj::uSubstr(txt,(i + 1),(::polymod::util::Util_obj::uLength(txt) - (i + 1)));
HXLINE( 252)						txt = ::polymod::util::Util_obj::trimLeadingWhiteSpace(txt);
            					}
            				}
            			}
            		}
HXLINE( 257)		if (stripFooter) {
HXLINE( 259)			txt = ::polymod::util::Util_obj::trimTrailingWhiteSpace(txt);
HXLINE( 260)			int ulen = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 261)			if ((::polymod::util::Util_obj::uLastIndexOf(txt,HX_("</data>",81,d9,55,5e),null()) == (ulen - 7))) {
HXLINE( 263)				txt = ::polymod::util::Util_obj::uSubstr(txt,0,(ulen - 7));
            			}
HXLINE( 265)			if (::hx::IsNotNull( footers )) {
HXLINE( 267)				int _g = 0;
HXDLIN( 267)				while((_g < footers->length)){
HXLINE( 267)					::String footer = footers->__get(_g);
HXDLIN( 267)					_g = (_g + 1);
HXLINE( 269)					txt = ::polymod::util::Util_obj::trimTrailingWhiteSpace(txt);
HXLINE( 270)					int ulen = ::polymod::util::Util_obj::uLength(txt);
HXLINE( 271)					int footerlen = ::polymod::util::Util_obj::uLength(footer);
HXLINE( 272)					if ((::polymod::util::Util_obj::uLastIndexOf(txt,footer,null()) == (ulen - footerlen))) {
HXLINE( 274)						txt = ::polymod::util::Util_obj::uSubstr(txt,0,(ulen - footerlen));
            					}
            				}
            			}
            		}
HXLINE( 279)		return txt;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC5(Util_obj,stripXML,return )

::String Util_obj::pathMerge(::String id,::String __o_theDir){
            		::String theDir = __o_theDir;
            		if (::hx::IsNull(__o_theDir)) theDir = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_284_pathMerge)
HXDLIN( 284)		return ::polymod::util::Util_obj::pathSpecial(id,::polymod::PolymodConfig_obj::get_mergeFolder(),theDir);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,pathMerge,return )

::String Util_obj::pathAppend(::String id,::String __o_theDir){
            		::String theDir = __o_theDir;
            		if (::hx::IsNull(__o_theDir)) theDir = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_289_pathAppend)
HXDLIN( 289)		return ::polymod::util::Util_obj::pathSpecial(id,::polymod::PolymodConfig_obj::get_appendFolder(),theDir);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,pathAppend,return )

::String Util_obj::stripAssetsPrefix(::String id){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_293_stripAssetsPrefix)
HXLINE( 294)		if ((::polymod::util::Util_obj::uIndexOf(id,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE( 296)			id = ::polymod::util::Util_obj::uSubstring(id,7,null());
            		}
HXLINE( 298)		return id;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,stripAssetsPrefix,return )

::String Util_obj::pathSpecial(::String id,::String __o_special,::String __o_theDir){
            		::String special = __o_special;
            		if (::hx::IsNull(__o_special)) special = HX_("",00,00,00,00);
            		::String theDir = __o_theDir;
            		if (::hx::IsNull(__o_theDir)) theDir = HX_("",00,00,00,00);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_302_pathSpecial)
HXLINE( 304)		::String id1 = id;
HXDLIN( 304)		if ((::polymod::util::Util_obj::uIndexOf(id1,HX_("assets/",4c,2a,dc,36),null()) == 0)) {
HXLINE( 304)			id1 = ::polymod::util::Util_obj::uSubstring(id1,7,null());
            		}
HXDLIN( 304)		id = id1;
HXLINE( 305)		::String thePath = ::polymod::util::Util_obj::sl();
HXDLIN( 305)		::String thePath1 = ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(5)->init(0,theDir)->init(1,thePath)->init(2,special)->init(3,::polymod::util::Util_obj::sl())->init(4,id));
HXLINE( 306)		return thePath1;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,pathSpecial,return )

::String Util_obj::pathJoin(::String a,::String b){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_313_pathJoin)
HXLINE( 314)		bool aSlash;
HXDLIN( 314)		int aSlash1 = ::polymod::util::Util_obj::uLastIndexOf(a,HX_("/",2f,00,00,00),null());
HXDLIN( 314)		if ((aSlash1 != (::polymod::util::Util_obj::uLength(a) - 1))) {
HXLINE( 314)			int aSlash1 = ::polymod::util::Util_obj::uLastIndexOf(a,HX_("\\",5c,00,00,00),null());
HXDLIN( 314)			aSlash = (aSlash1 == (::polymod::util::Util_obj::uLength(a) - 1));
            		}
            		else {
HXLINE( 314)			aSlash = true;
            		}
HXLINE( 315)		bool bSlash;
HXDLIN( 315)		if ((::polymod::util::Util_obj::uIndexOf(b,HX_("/",2f,00,00,00),null()) != 0)) {
HXLINE( 315)			bSlash = (::polymod::util::Util_obj::uIndexOf(b,HX_("\\",5c,00,00,00),null()) == 0);
            		}
            		else {
HXLINE( 315)			bSlash = true;
            		}
HXLINE( 316)		::String str = HX_("",00,00,00,00);
HXLINE( 317)		bool _hx_tmp;
HXDLIN( 317)		if (!(aSlash)) {
HXLINE( 317)			_hx_tmp = bSlash;
            		}
            		else {
HXLINE( 317)			_hx_tmp = true;
            		}
HXDLIN( 317)		if (_hx_tmp) {
HXLINE( 319)			str = ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(2)->init(0,a)->init(1,b));
            		}
            		else {
HXLINE( 323)			str = ::polymod::util::Util_obj::uCombine(::Array_obj< ::String >::__new(3)->init(0,a)->init(1,::polymod::util::Util_obj::sl())->init(2,b));
            		}
HXLINE( 325)		str = ::polymod::util::Util_obj::cleanSlashes(str);
HXLINE( 326)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,pathJoin,return )

::String Util_obj::cleanSlashes(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_330_cleanSlashes)
HXLINE( 331)		str = ::polymod::util::Util_obj::uSplitReplace(str,HX_("\\",5c,00,00,00),HX_("/",2f,00,00,00));
HXLINE( 332)		str = ::polymod::util::Util_obj::uSplitReplace(str,HX_("//",20,29,00,00),HX_("/",2f,00,00,00));
HXLINE( 333)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,cleanSlashes,return )

::String Util_obj::sl(){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_338_sl)
HXDLIN( 338)		return HX_("/",2f,00,00,00);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC0(Util_obj,sl,return )

 ::Xml Util_obj::copyXml( ::Xml data, ::Xml parent){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_343_copyXml)
HXLINE( 344)		 ::Xml c = null();
HXLINE( 345)		if ((data->nodeType == ::Xml_obj::Element)) {
HXLINE( 347)			if ((data->nodeType != ::Xml_obj::Element)) {
HXLINE( 347)				HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, expected Element but found ",d8,90,8b,bb) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            			}
HXDLIN( 347)			c = ::Xml_obj::createElement(data->nodeName);
HXLINE( 348)			{
HXLINE( 348)				 ::Dynamic att = data->attributes();
HXDLIN( 348)				while(( (bool)(att->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 348)					::String att1 = ( (::String)(att->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 350)					c->set(att1,data->get(att1));
            				}
            			}
HXLINE( 352)			{
HXLINE( 352)				 ::Dynamic el = data->elements();
HXDLIN( 352)				while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 352)					 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 354)					c->addChild(::polymod::util::Util_obj::copyXml(el1,c));
            				}
            			}
            		}
            		else {
HXLINE( 357)			if ((data->nodeType == ::Xml_obj::PCData)) {
HXLINE( 359)				bool c1;
HXDLIN( 359)				if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 359)					c1 = (data->nodeType == ::Xml_obj::Element);
            				}
            				else {
HXLINE( 359)					c1 = true;
            				}
HXDLIN( 359)				if (c1) {
HXLINE( 359)					HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            				}
HXDLIN( 359)				c = ::Xml_obj::createPCData(data->nodeValue);
            			}
            			else {
HXLINE( 361)				if ((data->nodeType == ::Xml_obj::CData)) {
HXLINE( 363)					bool c1;
HXDLIN( 363)					if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 363)						c1 = (data->nodeType == ::Xml_obj::Element);
            					}
            					else {
HXLINE( 363)						c1 = true;
            					}
HXDLIN( 363)					if (c1) {
HXLINE( 363)						HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            					}
HXDLIN( 363)					c = ::Xml_obj::createCData(data->nodeValue);
            				}
            				else {
HXLINE( 365)					if ((data->nodeType == ::Xml_obj::Comment)) {
HXLINE( 367)						bool c1;
HXDLIN( 367)						if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 367)							c1 = (data->nodeType == ::Xml_obj::Element);
            						}
            						else {
HXLINE( 367)							c1 = true;
            						}
HXDLIN( 367)						if (c1) {
HXLINE( 367)							HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            						}
HXDLIN( 367)						c = ::Xml_obj::createComment(data->nodeValue);
            					}
            					else {
HXLINE( 369)						if ((data->nodeType == ::Xml_obj::DocType)) {
HXLINE( 371)							bool c1;
HXDLIN( 371)							if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 371)								c1 = (data->nodeType == ::Xml_obj::Element);
            							}
            							else {
HXLINE( 371)								c1 = true;
            							}
HXDLIN( 371)							if (c1) {
HXLINE( 371)								HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            							}
HXDLIN( 371)							c = ::Xml_obj::createDocType(data->nodeValue);
            						}
            						else {
HXLINE( 373)							if ((data->nodeType == ::Xml_obj::ProcessingInstruction)) {
HXLINE( 375)								bool c1;
HXDLIN( 375)								if ((data->nodeType != ::Xml_obj::Document)) {
HXLINE( 375)									c1 = (data->nodeType == ::Xml_obj::Element);
            								}
            								else {
HXLINE( 375)									c1 = true;
            								}
HXDLIN( 375)								if (c1) {
HXLINE( 375)									HX_STACK_DO_THROW(::haxe::Exception_obj::thrown((HX_("Bad node type, unexpected ",be,79,d5,11) + ::_Xml::XmlType_Impl__obj::toString(data->nodeType))));
            								}
HXDLIN( 375)								c = ::Xml_obj::createProcessingInstruction(data->nodeValue);
            							}
            							else {
HXLINE( 377)								if ((data->nodeType == ::Xml_obj::Document)) {
HXLINE( 379)									c = ::Xml_obj::createDocument();
HXLINE( 380)									{
HXLINE( 380)										 ::Dynamic el = data->elements();
HXDLIN( 380)										while(( (bool)(el->__Field(HX_("hasNext",6d,a5,46,18),::hx::paccDynamic)()) )){
HXLINE( 380)											 ::Xml el1 = ( ( ::Xml)(el->__Field(HX_("next",f3,84,02,49),::hx::paccDynamic)()) );
HXLINE( 382)											c->addChild(::polymod::util::Util_obj::copyXml(el1,c));
            										}
            									}
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 385)		c->parent = parent;
HXLINE( 386)		return c;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,copyXml,return )

::String Util_obj::uCat(::String a,::String b){
            	HX_GC_STACKFRAME(&_hx_pos_ed681bbd235d58c2_391_uCat)
HXLINE( 392)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 393)		{
HXLINE( 393)			::String x = ::Std_obj::string(a);
HXDLIN( 393)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 393)				sb->flush();
            			}
HXDLIN( 393)			if (::hx::IsNull( sb->b )) {
HXLINE( 393)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            			}
            			else {
HXLINE( 393)				::Array< ::String > sb1 = sb->b;
HXDLIN( 393)				sb1->push(::Std_obj::string(x));
            			}
            		}
HXLINE( 394)		{
HXLINE( 394)			::String x1 = ::Std_obj::string(b);
HXDLIN( 394)			if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 394)				sb->flush();
            			}
HXDLIN( 394)			if (::hx::IsNull( sb->b )) {
HXLINE( 394)				sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x1));
            			}
            			else {
HXLINE( 394)				::Array< ::String > sb1 = sb->b;
HXDLIN( 394)				sb1->push(::Std_obj::string(x1));
            			}
            		}
HXLINE( 395)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uCat,return )

::String Util_obj::uCharAt(::String str,int index){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_403_uCharAt)
HXDLIN( 403)		return str.charAt(index);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uCharAt,return )

::String Util_obj::uJoin(::Array< ::String > arr,::String token){
            	HX_GC_STACKFRAME(&_hx_pos_ed681bbd235d58c2_408_uJoin)
HXLINE( 409)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 410)		int i = 0;
HXLINE( 411)		{
HXLINE( 411)			int _g = 0;
HXDLIN( 411)			while((_g < arr->length)){
HXLINE( 411)				::String str = arr->__get(_g);
HXDLIN( 411)				_g = (_g + 1);
HXLINE( 413)				{
HXLINE( 413)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 413)						sb->flush();
            					}
HXDLIN( 413)					if (::hx::IsNull( sb->b )) {
HXLINE( 413)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(str));
            					}
            					else {
HXLINE( 413)						::Array< ::String > sb1 = sb->b;
HXDLIN( 413)						sb1->push(::Std_obj::string(str));
            					}
            				}
HXLINE( 414)				if ((i != (arr->length - 1))) {
HXLINE( 416)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 416)						sb->flush();
            					}
HXDLIN( 416)					if (::hx::IsNull( sb->b )) {
HXLINE( 416)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(token));
            					}
            					else {
HXLINE( 416)						::Array< ::String > sb1 = sb->b;
HXDLIN( 416)						sb1->push(::Std_obj::string(token));
            					}
            				}
HXLINE( 418)				i = (i + 1);
            			}
            		}
HXLINE( 420)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uJoin,return )

::String Util_obj::uCombine(::Array< ::String > arr){
            	HX_GC_STACKFRAME(&_hx_pos_ed681bbd235d58c2_424_uCombine)
HXLINE( 425)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 426)		{
HXLINE( 426)			int _g = 0;
HXDLIN( 426)			while((_g < arr->length)){
HXLINE( 426)				::String str = arr->__get(_g);
HXDLIN( 426)				_g = (_g + 1);
HXLINE( 428)				{
HXLINE( 428)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 428)						sb->flush();
            					}
HXDLIN( 428)					if (::hx::IsNull( sb->b )) {
HXLINE( 428)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(str));
            					}
            					else {
HXLINE( 428)						::Array< ::String > sb1 = sb->b;
HXDLIN( 428)						sb1->push(::Std_obj::string(str));
            					}
            				}
            			}
            		}
HXLINE( 430)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uCombine,return )

::String Util_obj::uExtension(::String str,::hx::Null< bool >  __o_lowerCase){
            		bool lowerCase = __o_lowerCase.Default(false);
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_434_uExtension)
HXLINE( 435)		int i = ::polymod::util::Util_obj::uLastIndexOf(str,HX_(".",2e,00,00,00),null());
HXLINE( 436)		::String extension = ::polymod::util::Util_obj::uSubstr(str,(i + 1),(::polymod::util::Util_obj::uLength(str) - (i + 1)));
HXLINE( 437)		if (lowerCase) {
HXLINE( 439)			extension = extension.toLowerCase();
            		}
HXLINE( 441)		return extension;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uExtension,return )

int Util_obj::uIndexOf(::String str,::String substr, ::Dynamic startIndex){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_449_uIndexOf)
HXDLIN( 449)		return str.indexOf(substr,startIndex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uIndexOf,return )

int Util_obj::uLastIndexOf(::String str,::String value, ::Dynamic startIndex){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_458_uLastIndexOf)
HXDLIN( 458)		return str.lastIndexOf(value,startIndex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uLastIndexOf,return )

int Util_obj::uLength(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_467_uLength)
HXDLIN( 467)		return str.length;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uLength,return )

::String Util_obj::uPathPop(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_472_uPathPop)
HXLINE( 478)		::Array< ::String > path = str.split(HX_("/",2f,00,00,00));
HXLINE( 479)		path->pop();
HXLINE( 480)		return path->join(HX_("/",2f,00,00,00));
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uPathPop,return )

::String Util_obj::uTrimFinalCharIf(::String str,::String match){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_485_uTrimFinalCharIf)
HXLINE( 486)		int uLength = ::polymod::util::Util_obj::uLength(str);
HXLINE( 487)		int last = ::polymod::util::Util_obj::uLastIndexOf(str,match,null());
HXLINE( 488)		if ((last == (uLength - 1))) {
HXLINE( 490)			str = ::polymod::util::Util_obj::uSubstr(str,0,(uLength - 1));
HXLINE( 491)			uLength = ::polymod::util::Util_obj::uLength(str);
            		}
HXLINE( 493)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uTrimFinalCharIf,return )

::String Util_obj::uTrimFinalEndlines(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_497_uTrimFinalEndlines)
HXLINE( 498)		bool done = false;
HXLINE( 499)		::String fix = HX_("",00,00,00,00);
HXLINE( 500)		::String last = HX_("",00,00,00,00);
HXLINE( 501)		while(!(done)){
HXLINE( 503)			::String fix = ::polymod::util::Util_obj::uTrimFinalCharIf(str,HX_("\n",0a,00,00,00));
HXLINE( 504)			fix = ::polymod::util::Util_obj::uTrimFinalCharIf(fix,HX_("\r",0d,00,00,00));
HXLINE( 505)			if ((fix == str)) {
HXLINE( 507)				done = true;
            			}
            			else {
HXLINE( 511)				str = fix;
            			}
            		}
HXLINE( 514)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uTrimFinalEndlines,return )

::String Util_obj::uTrimFirstCharIf(::String str,::String match){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_518_uTrimFirstCharIf)
HXLINE( 519)		int uLength = ::polymod::util::Util_obj::uLength(str);
HXLINE( 520)		int first = ::polymod::util::Util_obj::uIndexOf(str,match,null());
HXLINE( 521)		if ((first == 0)) {
HXLINE( 523)			str = ::polymod::util::Util_obj::uSubstr(str,1,uLength);
HXLINE( 524)			uLength = ::polymod::util::Util_obj::uLength(str);
            		}
HXLINE( 526)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uTrimFirstCharIf,return )

::String Util_obj::uTrimFirstEndlines(::String str){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_530_uTrimFirstEndlines)
HXLINE( 531)		bool done = false;
HXLINE( 532)		::String fix = HX_("",00,00,00,00);
HXLINE( 533)		::String last = HX_("",00,00,00,00);
HXLINE( 534)		while(!(done)){
HXLINE( 536)			::String fix = ::polymod::util::Util_obj::uTrimFirstCharIf(str,HX_("\n",0a,00,00,00));
HXLINE( 537)			fix = ::polymod::util::Util_obj::uTrimFirstCharIf(fix,HX_("\r",0d,00,00,00));
HXLINE( 538)			if ((fix == str)) {
HXLINE( 540)				done = true;
            			}
            			else {
HXLINE( 544)				str = fix;
            			}
            		}
HXLINE( 547)		return str;
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC1(Util_obj,uTrimFirstEndlines,return )

::Array< ::String > Util_obj::uSplit(::String str,::String substr){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_555_uSplit)
HXDLIN( 555)		return str.split(substr);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC2(Util_obj,uSplit,return )

::String Util_obj::uSplitReplace(::String s,::String substr,::String by){
            	HX_GC_STACKFRAME(&_hx_pos_ed681bbd235d58c2_560_uSplitReplace)
HXLINE( 561)		if ((::polymod::util::Util_obj::uIndexOf(s,substr,null()) == -1)) {
HXLINE( 562)			return s;
            		}
HXLINE( 564)		::Array< ::String > arr = ::polymod::util::Util_obj::uSplit(s,substr);
HXLINE( 566)		bool _hx_tmp;
HXDLIN( 566)		if (::hx::IsNotNull( arr )) {
HXLINE( 566)			_hx_tmp = (arr->length < 2);
            		}
            		else {
HXLINE( 566)			_hx_tmp = true;
            		}
HXDLIN( 566)		if (_hx_tmp) {
HXLINE( 567)			return s;
            		}
HXLINE( 569)		 ::StringBuf sb =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 570)		{
HXLINE( 570)			int _g = 0;
HXDLIN( 570)			int _g1 = arr->length;
HXDLIN( 570)			while((_g < _g1)){
HXLINE( 570)				_g = (_g + 1);
HXDLIN( 570)				int i = (_g - 1);
HXLINE( 572)				::String bit = arr->__get(i);
HXLINE( 573)				{
HXLINE( 573)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 573)						sb->flush();
            					}
HXDLIN( 573)					if (::hx::IsNull( sb->b )) {
HXLINE( 573)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(bit));
            					}
            					else {
HXLINE( 573)						::Array< ::String > sb1 = sb->b;
HXDLIN( 573)						sb1->push(::Std_obj::string(bit));
            					}
            				}
HXLINE( 574)				if ((i != (arr->length - 1))) {
HXLINE( 576)					if (::hx::IsNotNull( sb->charBuf )) {
HXLINE( 576)						sb->flush();
            					}
HXDLIN( 576)					if (::hx::IsNull( sb->b )) {
HXLINE( 576)						sb->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(by));
            					}
            					else {
HXLINE( 576)						::Array< ::String > sb1 = sb->b;
HXDLIN( 576)						sb1->push(::Std_obj::string(by));
            					}
            				}
            			}
            		}
HXLINE( 580)		return sb->toString();
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uSplitReplace,return )

::String Util_obj::uSubstr(::String str,int pos, ::Dynamic len){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_588_uSubstr)
HXDLIN( 588)		return str.substr(pos,len);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uSubstr,return )

::String Util_obj::uSubstring(::String str,int startIndex, ::Dynamic endIndex){
            	HX_STACKFRAME(&_hx_pos_ed681bbd235d58c2_597_uSubstring)
HXDLIN( 597)		return str.substring(startIndex,endIndex);
            	}


STATIC_HX_DEFINE_DYNAMIC_FUNC3(Util_obj,uSubstring,return )


Util_obj::Util_obj()
{
}

bool Util_obj::__GetStatic(const ::String &inName, Dynamic &outValue, ::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 2:
		if (HX_FIELD_EQ(inName,"sl") ) { outValue = sl_dyn(); return true; }
		break;
	case 4:
		if (HX_FIELD_EQ(inName,"uCat") ) { outValue = uCat_dyn(); return true; }
		break;
	case 5:
		if (HX_FIELD_EQ(inName,"uJoin") ) { outValue = uJoin_dyn(); return true; }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"uSplit") ) { outValue = uSplit_dyn(); return true; }
		break;
	case 7:
		if (HX_FIELD_EQ(inName,"copyXml") ) { outValue = copyXml_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uCharAt") ) { outValue = uCharAt_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uLength") ) { outValue = uLength_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uSubstr") ) { outValue = uSubstr_dyn(); return true; }
		break;
	case 8:
		if (HX_FIELD_EQ(inName,"stripXML") ) { outValue = stripXML_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pathJoin") ) { outValue = pathJoin_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uCombine") ) { outValue = uCombine_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uIndexOf") ) { outValue = uIndexOf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uPathPop") ) { outValue = uPathPop_dyn(); return true; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"mergeText") ) { outValue = mergeText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"appendXML") ) { outValue = appendXML_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pathMerge") ) { outValue = pathMerge_dyn(); return true; }
		break;
	case 10:
		if (HX_FIELD_EQ(inName,"appendText") ) { outValue = appendText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"pathAppend") ) { outValue = pathAppend_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uExtension") ) { outValue = uExtension_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uSubstring") ) { outValue = uSubstring_dyn(); return true; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"pathSpecial") ) { outValue = pathSpecial_dyn(); return true; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"cleanSlashes") ) { outValue = cleanSlashes_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uLastIndexOf") ) { outValue = uLastIndexOf_dyn(); return true; }
		break;
	case 13:
		if (HX_FIELD_EQ(inName,"stripComments") ) { outValue = stripComments_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uSplitReplace") ) { outValue = uSplitReplace_dyn(); return true; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"appendCSVOrTSV") ) { outValue = appendCSVOrTSV_dyn(); return true; }
		break;
	case 15:
		if (HX_FIELD_EQ(inName,"stripPathPrefix") ) { outValue = stripPathPrefix_dyn(); return true; }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"appendSpecialXML") ) { outValue = appendSpecialXML_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uTrimFinalCharIf") ) { outValue = uTrimFinalCharIf_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uTrimFirstCharIf") ) { outValue = uTrimFirstCharIf_dyn(); return true; }
		break;
	case 17:
		if (HX_FIELD_EQ(inName,"stripAssetsPrefix") ) { outValue = stripAssetsPrefix_dyn(); return true; }
		break;
	case 18:
		if (HX_FIELD_EQ(inName,"mergeAndAppendText") ) { outValue = mergeAndAppendText_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uTrimFinalEndlines") ) { outValue = uTrimFinalEndlines_dyn(); return true; }
		if (HX_FIELD_EQ(inName,"uTrimFirstEndlines") ) { outValue = uTrimFirstEndlines_dyn(); return true; }
		break;
	case 21:
		if (HX_FIELD_EQ(inName,"trimLeadingWhiteSpace") ) { outValue = trimLeadingWhiteSpace_dyn(); return true; }
		break;
	case 22:
		if (HX_FIELD_EQ(inName,"trimTrailingWhiteSpace") ) { outValue = trimTrailingWhiteSpace_dyn(); return true; }
	}
	return false;
}

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo *Util_obj_sMemberStorageInfo = 0;
static ::hx::StaticInfo *Util_obj_sStaticStorageInfo = 0;
#endif

::hx::Class Util_obj::__mClass;

static ::String Util_obj_sStaticFields[] = {
	HX_("mergeAndAppendText",86,bb,89,90),
	HX_("mergeText",85,57,4d,74),
	HX_("appendText",a7,cf,05,5b),
	HX_("appendCSVOrTSV",08,df,4c,88),
	HX_("appendSpecialXML",98,73,b2,53),
	HX_("appendXML",1d,4c,6a,1f),
	HX_("stripComments",2c,40,17,46),
	HX_("stripPathPrefix",0f,d2,ba,43),
	HX_("trimLeadingWhiteSpace",81,9c,f1,7b),
	HX_("trimTrailingWhiteSpace",db,d6,b4,cb),
	HX_("stripXML",df,0d,70,dd),
	HX_("pathMerge",d3,96,86,fb),
	HX_("pathAppend",5f,85,09,a2),
	HX_("stripAssetsPrefix",6d,dd,37,77),
	HX_("pathSpecial",14,eb,0e,bc),
	HX_("pathJoin",2f,7c,04,3c),
	HX_("cleanSlashes",62,4b,95,f9),
	HX_("sl",99,64,00,00),
	HX_("copyXml",22,e9,88,43),
	HX_("uCat",a1,22,89,4d),
	HX_("uCharAt",be,33,59,ed),
	HX_("uJoin",ff,3e,20,8f),
	HX_("uCombine",8a,7a,8d,6b),
	HX_("uExtension",4a,3c,ec,68),
	HX_("uIndexOf",d4,98,1e,d2),
	HX_("uLastIndexOf",9e,ae,1a,86),
	HX_("uLength",3b,4f,eb,d4),
	HX_("uPathPop",f7,d4,d7,fa),
	HX_("uTrimFinalCharIf",b2,65,84,19),
	HX_("uTrimFinalEndlines",63,3b,6c,0f),
	HX_("uTrimFirstCharIf",ec,c5,81,b7),
	HX_("uTrimFirstEndlines",1d,9e,ad,2f),
	HX_("uSplit",25,92,5d,dc),
	HX_("uSplitReplace",8f,9c,1c,9b),
	HX_("uSubstr",86,a9,ee,cf),
	HX_("uSubstring",1c,9b,c3,66),
	::String(null())
};

void Util_obj::__register()
{
	Util_obj _hx_dummy;
	Util_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.util.Util",96,7d,da,e4);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &Util_obj::__GetStatic;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(Util_obj_sStaticFields);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(0 /* sMemberFields */);
	__mClass->mCanCast = ::hx::TCanCast< Util_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = Util_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = Util_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace util
