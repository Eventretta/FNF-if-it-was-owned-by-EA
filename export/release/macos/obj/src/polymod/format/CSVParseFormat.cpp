#include <hxcpp.h>

#ifndef INCLUDED_Std
#include <Std.h>
#endif
#ifndef INCLUDED_StringBuf
#include <StringBuf.h>
#endif
#ifndef INCLUDED_haxe_Exception
#include <haxe/Exception.h>
#endif
#ifndef INCLUDED_polymod_Polymod
#include <polymod/Polymod.h>
#endif
#ifndef INCLUDED_polymod_format_BaseParseFormat
#include <polymod/format/BaseParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_CSV
#include <polymod/format/CSV.h>
#endif
#ifndef INCLUDED_polymod_format_CSVParseFormat
#include <polymod/format/CSVParseFormat.h>
#endif
#ifndef INCLUDED_polymod_format_TextFileFormat
#include <polymod/format/TextFileFormat.h>
#endif
#ifndef INCLUDED_polymod_util_Util
#include <polymod/util/Util.h>
#endif

HX_DEFINE_STACK_FRAME(_hx_pos_47f6066263d681f0_96_new,"polymod.format.CSVParseFormat","new",0x5ec44915,"polymod.format.CSVParseFormat.new","polymod/format/ParseRules.hx",96,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_104_get_isSimpleMode,"polymod.format.CSVParseFormat","get_isSimpleMode",0x118293f3,"polymod.format.CSVParseFormat.get_isSimpleMode","polymod/format/ParseRules.hx",104,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_109_parse,"polymod.format.CSVParseFormat","parse",0xf35d6028,"polymod.format.CSVParseFormat.parse","polymod/format/ParseRules.hx",109,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_113_append,"polymod.format.CSVParseFormat","append",0xa0a20845,"polymod.format.CSVParseFormat.append","polymod/format/ParseRules.hx",113,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_231_merge,"polymod.format.CSVParseFormat","merge",0x3bce72ad,"polymod.format.CSVParseFormat.merge","polymod/format/ParseRules.hx",231,0xc5c5c43b)
HX_LOCAL_STACK_FRAME(_hx_pos_47f6066263d681f0_272_print,"polymod.format.CSVParseFormat","print",0xfe932822,"polymod.format.CSVParseFormat.print","polymod/format/ParseRules.hx",272,0xc5c5c43b)
static const ::String _hx_array_data_2d231aa3_16[] = {
	HX_("\r\n",5d,0b,00,00),
};
static const ::String _hx_array_data_2d231aa3_17[] = {
	HX_("\r\n",5d,0b,00,00),
};
namespace polymod{
namespace format{

void CSVParseFormat_obj::__construct(::String delimeter,bool quotedCells){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_96_new)
HXLINE(  97)		this->format = ::polymod::format::TextFileFormat_obj::CSV_dyn();
HXLINE(  98)		this->delimeter = delimeter;
HXLINE(  99)		this->quotedCells = quotedCells;
            	}

Dynamic CSVParseFormat_obj::__CreateEmpty() { return new CSVParseFormat_obj; }

void *CSVParseFormat_obj::_hx_vtable = 0;

Dynamic CSVParseFormat_obj::__Create(::hx::DynamicArray inArgs)
{
	::hx::ObjectPtr< CSVParseFormat_obj > _hx_result = new CSVParseFormat_obj();
	_hx_result->__construct(inArgs[0],inArgs[1]);
	return _hx_result;
}

bool CSVParseFormat_obj::_hx_isInstanceOf(int inClassId) {
	return inClassId==(int)0x00000001 || inClassId==(int)0x1a821905;
}

static ::polymod::format::BaseParseFormat_obj _hx_polymod_format_CSVParseFormat__hx_polymod_format_BaseParseFormat= {
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::CSVParseFormat_obj::append,
	( ::String (::hx::Object::*)(::String,::String,::String))&::polymod::format::CSVParseFormat_obj::merge,
};

void *CSVParseFormat_obj::_hx_getInterface(int inHash) {
	switch(inHash) {
		case (int)0xa2d29dcc: return &_hx_polymod_format_CSVParseFormat__hx_polymod_format_BaseParseFormat;
	}
	#ifdef HXCPP_SCRIPTABLE
	return super::_hx_getInterface(inHash);
	#else
	return 0;
	#endif
}

bool CSVParseFormat_obj::get_isSimpleMode(){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_104_get_isSimpleMode)
HXDLIN( 104)		if ((this->delimeter == HX_(",",2c,00,00,00))) {
HXDLIN( 104)			return (this->quotedCells == false);
            		}
            		else {
HXDLIN( 104)			return false;
            		}
HXDLIN( 104)		return false;
            	}


HX_DEFINE_DYNAMIC_FUNC0(CSVParseFormat_obj,get_isSimpleMode,return )

 ::polymod::format::CSV CSVParseFormat_obj::parse(::String str){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_109_parse)
HXDLIN( 109)		return ::polymod::format::CSV_obj::parse(str,this->delimeter,this->quotedCells);
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSVParseFormat_obj,parse,return )

::String CSVParseFormat_obj::append(::String baseText,::String appendText,::String id){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_113_append)
HXLINE( 114)		::String endLine = HX_("\n",0a,00,00,00);
HXLINE( 115)		if ((baseText.indexOf(HX_("\r\n",5d,0b,00,00),null()) != -1)) {
HXLINE( 117)			endLine = HX_("\r\n",5d,0b,00,00);
            		}
HXLINE( 119)		if (this->lookForHeaders) {
HXLINE( 121)			 ::polymod::format::CSV baseCSV;
HXLINE( 122)			 ::polymod::format::CSV appendCSV;
HXLINE( 125)			::String appendEndLine = HX_("\n",0a,00,00,00);
HXLINE( 126)			if ((appendText.indexOf(HX_("\r\n",5d,0b,00,00),null()) != -1)) {
HXLINE( 128)				appendEndLine = HX_("\r\n",5d,0b,00,00);
            			}
HXLINE( 130)			int appendLength = ::polymod::util::Util_obj::uLength(appendText);
HXLINE( 131)			int appendLast = ::polymod::util::Util_obj::uLastIndexOf(appendText,appendEndLine,null());
HXLINE( 132)			bool _hx_tmp;
HXDLIN( 132)			if ((appendLast != (appendLength - 1))) {
HXLINE( 132)				_hx_tmp = (appendLast == (appendLength - 2));
            			}
            			else {
HXLINE( 132)				_hx_tmp = true;
            			}
HXDLIN( 132)			if (_hx_tmp) {
HXLINE( 134)				appendText = ::polymod::util::Util_obj::uSubstr(appendText,0,(appendLength - ::polymod::util::Util_obj::uLength(appendEndLine)));
            			}
HXLINE( 137)			try {
            				HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 139)				baseCSV = ::polymod::format::CSV_obj::parseWithFormat(baseText,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 140)				appendCSV = ::polymod::format::CSV_obj::parseWithFormat(appendText,::hx::ObjectPtr<OBJ_>(this));
            			} catch( ::Dynamic _hx_e) {
            				if (_hx_e.IsClass<  ::Dynamic >() ){
            					HX_STACK_BEGIN_CATCH
            					 ::Dynamic _g = _hx_e;
HXLINE( 142)					{
HXLINE( 142)						null();
            					}
HXDLIN( 142)					 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 144)					::polymod::Polymod_obj::error(HX_("append_error",63,d4,ca,e5),(((HX_("CSV Append error (",e4,f0,34,73) + id) + HX_(") : ",3d,3a,32,1b)) + ::Std_obj::string(msg)),null());
HXLINE( 145)					return baseText;
            				}
            				else {
            					HX_STACK_DO_THROW(_hx_e);
            				}
            			}
HXLINE( 148)			::String finalText = baseText;
HXLINE( 149)			int finalLength = ::polymod::util::Util_obj::uLength(finalText);
HXLINE( 151)			int lastEndLine = ::polymod::util::Util_obj::uLastIndexOf(finalText,endLine,null());
HXLINE( 152)			bool addFinalEndline = false;
HXLINE( 154)			bool _hx_tmp1;
HXDLIN( 154)			if ((lastEndLine != (finalLength - 1))) {
HXLINE( 154)				_hx_tmp1 = (lastEndLine == (finalLength - 2));
            			}
            			else {
HXLINE( 154)				_hx_tmp1 = true;
            			}
HXDLIN( 154)			if (_hx_tmp1) {
HXLINE( 156)				finalText = ::polymod::util::Util_obj::uSubstr(finalText,0,(finalLength - ::polymod::util::Util_obj::uLength(endLine)));
HXLINE( 157)				addFinalEndline = true;
            			}
HXLINE( 160)			int compareFields = 0;
HXLINE( 161)			{
HXLINE( 161)				int _g = 0;
HXDLIN( 161)				int _g1 = baseCSV->fields->length;
HXDLIN( 161)				while((_g < _g1)){
HXLINE( 161)					_g = (_g + 1);
HXDLIN( 161)					int i = (_g - 1);
HXLINE( 163)					::String baseField = baseCSV->fields->__get(i);
HXLINE( 164)					bool appendFieldExists = (appendCSV->fields->indexOf(baseField,null()) != -1);
HXLINE( 165)					if (appendFieldExists) {
HXLINE( 166)						compareFields = (compareFields + 1);
            					}
            				}
            			}
HXLINE( 169)			if (this->lookForHeaders) {
HXLINE( 171)				if ((compareFields < ::Std_obj::_hx_int((( (Float)(baseCSV->fields->length) ) / ( (Float)(2) ))))) {
HXLINE( 173)					::polymod::Polymod_obj::error(HX_("append_error",63,d4,ca,e5),((HX_("Mod file(",2e,de,e2,49) + id) + HX_(") is missing most or all of the expected header fields",e4,52,a8,00)),HX_("init",10,3b,bb,45));
            				}
            			}
HXLINE( 177)			::Array< ::String > missingFields = ::Array_obj< ::String >::__new(0);
HXLINE( 179)			{
HXLINE( 179)				int _g2 = 0;
HXDLIN( 179)				int _g3 = appendCSV->grid->length;
HXDLIN( 179)				while((_g2 < _g3)){
HXLINE( 179)					_g2 = (_g2 + 1);
HXDLIN( 179)					int r = (_g2 - 1);
HXLINE( 181)					::String line = HX_("",00,00,00,00);
HXLINE( 182)					{
HXLINE( 182)						int _g = 0;
HXDLIN( 182)						int _g1 = baseCSV->fields->length;
HXDLIN( 182)						while((_g < _g1)){
HXLINE( 182)							_g = (_g + 1);
HXDLIN( 182)							int bi = (_g - 1);
HXLINE( 184)							::String baseField = baseCSV->fields->__get(bi);
HXLINE( 185)							int appendField = appendCSV->fields->indexOf(baseField,null());
HXLINE( 186)							if ((appendField != -1)) {
HXLINE( 188)								::String appendValue = appendCSV->grid->__get(r).StaticCast< ::Array< ::String > >()->__get(appendField);
HXLINE( 189)								if (::hx::IsNull( appendValue )) {
HXLINE( 191)									appendValue = HX_("",00,00,00,00);
            								}
HXLINE( 193)								line = (line + appendValue);
            							}
            							else {
HXLINE( 197)								if ((missingFields->indexOf(baseField,null()) == -1)) {
HXLINE( 199)									missingFields->push(baseField);
            								}
            							}
HXLINE( 202)							if ((bi != (baseCSV->fields->length - 1))) {
HXLINE( 204)								line = (line + this->delimeter);
            							}
            						}
            					}
HXLINE( 207)					finalText = (finalText + (endLine + line));
            				}
            			}
HXLINE( 210)			if (addFinalEndline) {
HXLINE( 212)				finalText = (finalText + endLine);
            			}
HXLINE( 215)			{
HXLINE( 215)				int _g4 = 0;
HXDLIN( 215)				while((_g4 < missingFields->length)){
HXLINE( 215)					::String baseField = missingFields->__get(_g4);
HXDLIN( 215)					_g4 = (_g4 + 1);
HXLINE( 217)					::polymod::Polymod_obj::warning(HX_("append_error",63,d4,ca,e5),((((HX_("Mod file(",2e,de,e2,49) + id) + HX_(") missing expected field \"",65,fc,56,c0)) + baseField) + HX_("\", values will default to empty string.",aa,16,7f,ae)),HX_("init",10,3b,bb,45));
            				}
            			}
HXLINE( 225)			return finalText;
            		}
HXLINE( 227)		return ::polymod::util::Util_obj::appendCSVOrTSV(baseText,appendText,id);
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSVParseFormat_obj,append,return )

::String CSVParseFormat_obj::merge(::String baseText,::String mergeText,::String id){
            	HX_STACKFRAME(&_hx_pos_47f6066263d681f0_231_merge)
HXLINE( 232)		 ::polymod::format::CSV baseCSV;
HXLINE( 233)		 ::polymod::format::CSV mergeCSV;
HXLINE( 234)		try {
            			HX_STACK_CATCHABLE( ::Dynamic, 0);
HXLINE( 236)			baseCSV = ::polymod::format::CSV_obj::parseWithFormat(baseText,::hx::ObjectPtr<OBJ_>(this));
HXLINE( 237)			mergeCSV = ::polymod::format::CSV_obj::parseWithFormat(mergeText,::hx::ObjectPtr<OBJ_>(this));
            		} catch( ::Dynamic _hx_e) {
            			if (_hx_e.IsClass<  ::Dynamic >() ){
            				HX_STACK_BEGIN_CATCH
            				 ::Dynamic _g = _hx_e;
HXLINE( 239)				{
HXLINE( 239)					null();
            				}
HXDLIN( 239)				 ::Dynamic msg = ::haxe::Exception_obj::caught(_g)->unwrap();
HXLINE( 241)				::polymod::Polymod_obj::error(HX_("merge_error",c1,8f,ea,85),(((HX_("CSV Merge error (",4e,7a,a4,32) + id) + HX_(") : ",3d,3a,32,1b)) + ::Std_obj::string(msg)),null());
HXLINE( 242)				return baseText;
            			}
            			else {
            				HX_STACK_DO_THROW(_hx_e);
            			}
            		}
HXLINE( 245)		{
HXLINE( 245)			int _g = 0;
HXDLIN( 245)			::Array< ::Dynamic> _g1 = mergeCSV->grid;
HXDLIN( 245)			while((_g < _g1->length)){
HXLINE( 245)				::Array< ::String > row = _g1->__get(_g).StaticCast< ::Array< ::String > >();
HXDLIN( 245)				_g = (_g + 1);
HXLINE( 247)				::String flag;
HXDLIN( 247)				if ((row->length > 0)) {
HXLINE( 247)					flag = row->__get(0);
            				}
            				else {
HXLINE( 247)					flag = HX_("",00,00,00,00);
            				}
HXLINE( 248)				if ((flag != HX_("",00,00,00,00))) {
HXLINE( 250)					int _g = 0;
HXDLIN( 250)					int _g1 = baseCSV->grid->length;
HXDLIN( 250)					while((_g < _g1)){
HXLINE( 250)						_g = (_g + 1);
HXDLIN( 250)						int i = (_g - 1);
HXLINE( 252)						::Array< ::String > otherRow = baseCSV->grid->__get(i).StaticCast< ::Array< ::String > >();
HXLINE( 253)						::String otherFlag = otherRow->__get(0);
HXLINE( 254)						if ((flag == otherFlag)) {
HXLINE( 256)							int _g = 0;
HXDLIN( 256)							int _g1 = row->length;
HXDLIN( 256)							while((_g < _g1)){
HXLINE( 256)								_g = (_g + 1);
HXDLIN( 256)								int j = (_g - 1);
HXLINE( 258)								if ((j < otherRow->length)) {
HXLINE( 260)									otherRow[j] = row->__get(j);
            								}
            							}
            						}
            					}
            				}
            			}
            		}
HXLINE( 267)		::String result = this->print(baseCSV);
HXLINE( 268)		return result;
            	}


HX_DEFINE_DYNAMIC_FUNC3(CSVParseFormat_obj,merge,return )

::String CSVParseFormat_obj::print( ::polymod::format::CSV csv){
            	HX_GC_STACKFRAME(&_hx_pos_47f6066263d681f0_272_print)
HXLINE( 273)		 ::StringBuf buf =  ::StringBuf_obj::__alloc( HX_CTX );
HXLINE( 275)		int lf = 10;
HXLINE( 276)		int dq = 34;
HXLINE( 278)		{
HXLINE( 278)			int _g = 0;
HXDLIN( 278)			int _g1 = csv->fields->length;
HXDLIN( 278)			while((_g < _g1)){
HXLINE( 278)				_g = (_g + 1);
HXDLIN( 278)				int i = (_g - 1);
HXLINE( 280)				{
HXLINE( 280)					::String x = csv->fields->__get(i);
HXDLIN( 280)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 280)						buf->flush();
            					}
HXDLIN( 280)					if (::hx::IsNull( buf->b )) {
HXLINE( 280)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 280)						::Array< ::String > buf1 = buf->b;
HXDLIN( 280)						buf1->push(::Std_obj::string(x));
            					}
            				}
HXLINE( 281)				if ((i != (csv->fields->length - 1))) {
HXLINE( 283)					::String x = this->delimeter;
HXDLIN( 283)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 283)						buf->flush();
            					}
HXDLIN( 283)					if (::hx::IsNull( buf->b )) {
HXLINE( 283)						buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            					}
            					else {
HXLINE( 283)						::Array< ::String > buf1 = buf->b;
HXDLIN( 283)						buf1->push(::Std_obj::string(x));
            					}
            				}
            			}
            		}
HXLINE( 287)		::String strSoFar = buf->toString();
HXLINE( 289)		if ((strSoFar.indexOf(HX_("\n",0a,00,00,00),null()) == -1)) {
HXLINE( 291)			if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 291)				buf->flush();
            			}
HXDLIN( 291)			if (::hx::IsNull( buf->b )) {
HXLINE( 291)				buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_2d231aa3_16,1);
            			}
            			else {
HXLINE( 291)				buf->b->push(HX_("\r\n",5d,0b,00,00));
            			}
            		}
HXLINE( 294)		::Array< ::Dynamic> grid = csv->grid;
HXLINE( 296)		{
HXLINE( 296)			int _g2 = 0;
HXDLIN( 296)			int _g3 = grid->length;
HXDLIN( 296)			while((_g2 < _g3)){
HXLINE( 296)				_g2 = (_g2 + 1);
HXDLIN( 296)				int iy = (_g2 - 1);
HXLINE( 298)				::Array< ::String > row = grid->__get(iy).StaticCast< ::Array< ::String > >();
HXLINE( 299)				{
HXLINE( 299)					int _g = 0;
HXDLIN( 299)					int _g1 = row->length;
HXDLIN( 299)					while((_g < _g1)){
HXLINE( 299)						_g = (_g + 1);
HXDLIN( 299)						int ix = (_g - 1);
HXLINE( 301)						::String cell = row->__get(ix);
HXLINE( 302)						if (this->quotedCells) {
HXLINE( 304)							if ((dq >= 127)) {
HXLINE( 304)								::String x = ::String::fromCharCode(dq);
HXDLIN( 304)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 304)									buf->flush();
            								}
HXDLIN( 304)								if (::hx::IsNull( buf->b )) {
HXLINE( 304)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 304)									::Array< ::String > buf1 = buf->b;
HXDLIN( 304)									buf1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 304)								if (::hx::IsNull( buf->charBuf )) {
HXLINE( 304)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 304)								buf->charBuf->push(dq);
            							}
            						}
HXLINE( 306)						{
HXLINE( 306)							if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 306)								buf->flush();
            							}
HXDLIN( 306)							if (::hx::IsNull( buf->b )) {
HXLINE( 306)								buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(cell));
            							}
            							else {
HXLINE( 306)								::Array< ::String > buf1 = buf->b;
HXDLIN( 306)								buf1->push(::Std_obj::string(cell));
            							}
            						}
HXLINE( 307)						if (this->quotedCells) {
HXLINE( 309)							if ((dq >= 127)) {
HXLINE( 309)								::String x = ::String::fromCharCode(dq);
HXDLIN( 309)								if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 309)									buf->flush();
            								}
HXDLIN( 309)								if (::hx::IsNull( buf->b )) {
HXLINE( 309)									buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            								}
            								else {
HXLINE( 309)									::Array< ::String > buf1 = buf->b;
HXDLIN( 309)									buf1->push(::Std_obj::string(x));
            								}
            							}
            							else {
HXLINE( 309)								if (::hx::IsNull( buf->charBuf )) {
HXLINE( 309)									buf->charBuf = ::Array_obj< char >::__new();
            								}
HXDLIN( 309)								buf->charBuf->push(dq);
            							}
            						}
HXLINE( 311)						if ((ix != (row->length - 1))) {
HXLINE( 313)							::String x = this->delimeter;
HXDLIN( 313)							if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 313)								buf->flush();
            							}
HXDLIN( 313)							if (::hx::IsNull( buf->b )) {
HXLINE( 313)								buf->b = ::Array_obj< ::String >::__new(1)->init(0,::Std_obj::string(x));
            							}
            							else {
HXLINE( 313)								::Array< ::String > buf1 = buf->b;
HXDLIN( 313)								buf1->push(::Std_obj::string(x));
            							}
            						}
            					}
            				}
HXLINE( 316)				if ((iy != (grid->length - 1))) {
HXLINE( 318)					if (::hx::IsNotNull( buf->charBuf )) {
HXLINE( 318)						buf->flush();
            					}
HXDLIN( 318)					if (::hx::IsNull( buf->b )) {
HXLINE( 318)						buf->b = ::Array_obj< ::String >::fromData( _hx_array_data_2d231aa3_17,1);
            					}
            					else {
HXLINE( 318)						buf->b->push(HX_("\r\n",5d,0b,00,00));
            					}
            				}
            			}
            		}
HXLINE( 322)		return buf->toString();
            	}


HX_DEFINE_DYNAMIC_FUNC1(CSVParseFormat_obj,print,return )


::hx::ObjectPtr< CSVParseFormat_obj > CSVParseFormat_obj::__new(::String delimeter,bool quotedCells) {
	::hx::ObjectPtr< CSVParseFormat_obj > __this = new CSVParseFormat_obj();
	__this->__construct(delimeter,quotedCells);
	return __this;
}

::hx::ObjectPtr< CSVParseFormat_obj > CSVParseFormat_obj::__alloc(::hx::Ctx *_hx_ctx,::String delimeter,bool quotedCells) {
	CSVParseFormat_obj *__this = (CSVParseFormat_obj*)(::hx::Ctx::alloc(_hx_ctx, sizeof(CSVParseFormat_obj), true, "polymod.format.CSVParseFormat"));
	*(void **)__this = CSVParseFormat_obj::_hx_vtable;
	__this->__construct(delimeter,quotedCells);
	return __this;
}

CSVParseFormat_obj::CSVParseFormat_obj()
{
}

void CSVParseFormat_obj::__Mark(HX_MARK_PARAMS)
{
	HX_MARK_BEGIN_CLASS(CSVParseFormat);
	HX_MARK_MEMBER_NAME(format,"format");
	HX_MARK_MEMBER_NAME(isSimpleMode,"isSimpleMode");
	HX_MARK_MEMBER_NAME(delimeter,"delimeter");
	HX_MARK_MEMBER_NAME(quotedCells,"quotedCells");
	HX_MARK_MEMBER_NAME(lookForHeaders,"lookForHeaders");
	HX_MARK_END_CLASS();
}

void CSVParseFormat_obj::__Visit(HX_VISIT_PARAMS)
{
	HX_VISIT_MEMBER_NAME(format,"format");
	HX_VISIT_MEMBER_NAME(isSimpleMode,"isSimpleMode");
	HX_VISIT_MEMBER_NAME(delimeter,"delimeter");
	HX_VISIT_MEMBER_NAME(quotedCells,"quotedCells");
	HX_VISIT_MEMBER_NAME(lookForHeaders,"lookForHeaders");
}

::hx::Val CSVParseFormat_obj::__Field(const ::String &inName,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 5:
		if (HX_FIELD_EQ(inName,"parse") ) { return ::hx::Val( parse_dyn() ); }
		if (HX_FIELD_EQ(inName,"merge") ) { return ::hx::Val( merge_dyn() ); }
		if (HX_FIELD_EQ(inName,"print") ) { return ::hx::Val( print_dyn() ); }
		break;
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { return ::hx::Val( format ); }
		if (HX_FIELD_EQ(inName,"append") ) { return ::hx::Val( append_dyn() ); }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"delimeter") ) { return ::hx::Val( delimeter ); }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quotedCells") ) { return ::hx::Val( quotedCells ); }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isSimpleMode") ) { return ::hx::Val( inCallProp == ::hx::paccAlways ? get_isSimpleMode() : isSimpleMode ); }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lookForHeaders") ) { return ::hx::Val( lookForHeaders ); }
		break;
	case 16:
		if (HX_FIELD_EQ(inName,"get_isSimpleMode") ) { return ::hx::Val( get_isSimpleMode_dyn() ); }
	}
	return super::__Field(inName,inCallProp);
}

::hx::Val CSVParseFormat_obj::__SetField(const ::String &inName,const ::hx::Val &inValue,::hx::PropertyAccess inCallProp)
{
	switch(inName.length) {
	case 6:
		if (HX_FIELD_EQ(inName,"format") ) { format=inValue.Cast<  ::polymod::format::TextFileFormat >(); return inValue; }
		break;
	case 9:
		if (HX_FIELD_EQ(inName,"delimeter") ) { delimeter=inValue.Cast< ::String >(); return inValue; }
		break;
	case 11:
		if (HX_FIELD_EQ(inName,"quotedCells") ) { quotedCells=inValue.Cast< bool >(); return inValue; }
		break;
	case 12:
		if (HX_FIELD_EQ(inName,"isSimpleMode") ) { isSimpleMode=inValue.Cast< bool >(); return inValue; }
		break;
	case 14:
		if (HX_FIELD_EQ(inName,"lookForHeaders") ) { lookForHeaders=inValue.Cast< bool >(); return inValue; }
	}
	return super::__SetField(inName,inValue,inCallProp);
}

void CSVParseFormat_obj::__GetFields(Array< ::String> &outFields)
{
	outFields->push(HX_("format",37,8f,8e,fd));
	outFields->push(HX_("isSimpleMode",3f,2d,b3,cd));
	outFields->push(HX_("delimeter",8b,2c,83,83));
	outFields->push(HX_("quotedCells",c9,09,54,60));
	outFields->push(HX_("lookForHeaders",7c,8d,66,72));
	super::__GetFields(outFields);
};

#ifdef HXCPP_SCRIPTABLE
static ::hx::StorageInfo CSVParseFormat_obj_sMemberStorageInfo[] = {
	{::hx::fsObject /*  ::polymod::format::TextFileFormat */ ,(int)offsetof(CSVParseFormat_obj,format),HX_("format",37,8f,8e,fd)},
	{::hx::fsBool,(int)offsetof(CSVParseFormat_obj,isSimpleMode),HX_("isSimpleMode",3f,2d,b3,cd)},
	{::hx::fsString,(int)offsetof(CSVParseFormat_obj,delimeter),HX_("delimeter",8b,2c,83,83)},
	{::hx::fsBool,(int)offsetof(CSVParseFormat_obj,quotedCells),HX_("quotedCells",c9,09,54,60)},
	{::hx::fsBool,(int)offsetof(CSVParseFormat_obj,lookForHeaders),HX_("lookForHeaders",7c,8d,66,72)},
	{ ::hx::fsUnknown, 0, null()}
};
static ::hx::StaticInfo *CSVParseFormat_obj_sStaticStorageInfo = 0;
#endif

static ::String CSVParseFormat_obj_sMemberFields[] = {
	HX_("format",37,8f,8e,fd),
	HX_("isSimpleMode",3f,2d,b3,cd),
	HX_("delimeter",8b,2c,83,83),
	HX_("quotedCells",c9,09,54,60),
	HX_("lookForHeaders",7c,8d,66,72),
	HX_("get_isSimpleMode",c8,19,52,d2),
	HX_("parse",33,90,55,bd),
	HX_("append",da,e1,d3,8f),
	HX_("merge",b8,a2,c6,05),
	HX_("print",2d,58,8b,c8),
	::String(null()) };

::hx::Class CSVParseFormat_obj::__mClass;

void CSVParseFormat_obj::__register()
{
	CSVParseFormat_obj _hx_dummy;
	CSVParseFormat_obj::_hx_vtable = *(void **)&_hx_dummy;
	::hx::Static(__mClass) = new ::hx::Class_obj();
	__mClass->mName = HX_("polymod.format.CSVParseFormat",a3,1a,23,2d);
	__mClass->mSuper = &super::__SGetClass();
	__mClass->mConstructEmpty = &__CreateEmpty;
	__mClass->mConstructArgs = &__Create;
	__mClass->mGetStaticField = &::hx::Class_obj::GetNoStaticField;
	__mClass->mSetStaticField = &::hx::Class_obj::SetNoStaticField;
	__mClass->mStatics = ::hx::Class_obj::dupFunctions(0 /* sStaticFields */);
	__mClass->mMembers = ::hx::Class_obj::dupFunctions(CSVParseFormat_obj_sMemberFields);
	__mClass->mCanCast = ::hx::TCanCast< CSVParseFormat_obj >;
#ifdef HXCPP_SCRIPTABLE
	__mClass->mMemberStorageInfo = CSVParseFormat_obj_sMemberStorageInfo;
#endif
#ifdef HXCPP_SCRIPTABLE
	__mClass->mStaticStorageInfo = CSVParseFormat_obj_sStaticStorageInfo;
#endif
	::hx::_hx_RegisterClass(__mClass->mName, __mClass);
}

} // end namespace polymod
} // end namespace format