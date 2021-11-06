#include "EditLexer.h"
#include "EditStyleX.h"

static KEYWORDLIST Keywords_diag = {{
//++Autogenerated -- start of section automatically generated
"actdiag blockdiag group lane network nwdiag packetdiag rack rackdiag seqdiag "

, // 1 labels
NULL

, // 2 attributes
"background color "
"default_fontsize default_group_color default_linecolor default_node_color default_shape default_textcolor description "
"dir "
"edge_layout folded fontsize height hstyle icon label node_height node_width numbered orientation rotate "
"shape span_height span_width stacked style textcolor width "

, // 3 node shapes
"actor beginpoint box circle cloud diamond dots ellipse endpoint "
"flowchart.condition flowchart.database flowchart.input flowchart.loopin flowchart.loopout flowchart.terminator "
"mail minidiamond note roundedbox square "

, // 4 color names
"aliceblue antiquewhite aqua aquamarine azure beige bisque black blanchedalmond blue blueviolet brown burlywood "
"cadetblue chartreuse chocolate coral cornflowerblue cornsilk crimson cyan "
"darkblue darkcyan darkgoldenrod darkgray darkgreen darkgrey darkkhaki darkmagenta darkolivegreen darkorange darkorchid "
"darkred darksalmon darkseagreen darkslateblue darkslategray darkslategrey darkturquoise darkviolet deeppink deepskyblue "
"dimgray dimgrey dodgerblue "
"firebrick floralwhite forestgreen fuchsia gainsboro ghostwhite gold goldenrod gray green greenyellow grey "
"honeydew hotpink indianred indigo invis ivory khaki "
"lavender lavenderblush lawngreen lemonchiffon lightblue lightcoral lightcyan "
"lightgoldenrod lightgoldenrodyellow lightgray lightgreen lightgrey lightpink "
"lightsalmon lightseagreen lightskyblue lightslateblue lightslategray lightslategrey lightsteelblue lightyellow "
"lime limegreen linen "
"magenta maroon mediumaquamarine mediumblue mediumorchid mediumpurple mediumseagreen mediumslateblue mediumspringgreen "
"mediumturquoise mediumvioletred midnightblue mintcream mistyrose moccasin "
"navajowhite navy navyblue none oldlace olive olivedrab orange orangered orchid "
"palegoldenrod palegreen paleturquoise palevioletred papayawhip peachpuff peru pink plum powderblue purple "
"rebeccapurple red rosybrown royalblue "
"saddlebrown salmon sandybrown seagreen seashell sienna silver skyblue slateblue slategray slategrey snow springgreen "
"steelblue "
"tan teal thistle tomato transparent turquoise violet violetred "
"webgray webgreen webgrey webmaroon webpurple wheat white whitesmoke x11gray x11green x11grey x11maroon x11purple "
"yellow yellowgreen "

, // 5 values
"aggregation back both composition dashed dotted flowchart forward generalization landscape normal portrait "

, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL, NULL
//--Autogenerated -- end of section automatically generated
}};

static EDITSTYLE Styles_diag[] = {
	EDITSTYLE_DEFAULT,
	{ SCE_GRAPHVIZ_WORD, NP2StyleX_Keyword, L"fore:#0000FF" },
	{ SCE_GRAPHVIZ_ATTRIBUTE, NP2StyleX_Attribute, L"fore:#FF8000" },
	{ SCE_GRAPHVIZ_VALUE, NP2StyleX_Value, L"fore:#008287" },
	{ SCE_GRAPHVIZ_HTML_TAG, NP2StyleX_Label, L"fore:#648000" },
	{ MULTI_STYLE(SCE_GRAPHVIZ_COMMENTLINE, SCE_GRAPHVIZ_COMMENTBLOCK, SCE_GRAPHVIZ_HTML_COMMENT, 0), NP2StyleX_Comment, L"fore:#608060" },
	{ SCE_GRAPHVIZ_STRING, NP2StyleX_String, L"fore:#008000" },
	{ SCE_GRAPHVIZ_ESCAPECHAR, NP2StyleX_EscapeSequence, L"fore:#0080C0" },
	{ SCE_GRAPHVIZ_NUMBER, NP2StyleX_Number, L"fore:#FF0000" },
	{ SCE_GRAPHVIZ_OPERATOR, NP2StyleX_Operator, L"fore:#B000B0" },
};

EDITLEXER lexBlockdiag = {
	SCLEX_GRAPHVIZ, NP2LEX_BLOCKDIAG,
	SCHEME_SETTINGS_DEFAULT,
	EDITLEXER_HOLE(L"blockdiag", Styles_diag),
	L"diag",
	&Keywords_diag,
	Styles_diag
};
