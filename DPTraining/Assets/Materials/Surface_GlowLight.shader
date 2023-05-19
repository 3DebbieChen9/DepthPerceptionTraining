Shader "Custom/Surface_GlowLight"
{
//     // 屬性
//     Properties
//     {
//         _MainTex("Texture(RGB)", 2D) = "white" {} // 表面貼圖 默認灰色
// 		_AlphaScale("Alpha Scale", Float) = 1.0 // 透明度縮放 默認為1
//         _Color("Color", Color) = (0, 0, 0, 1)    //為貼圖附加的顏色 默認為白色
//         // _AtmoColor("Atmosphere Color", Color) = (0, 0.4, 1.0, 1)    // 光暈顏色
//         // _Size("Size", Float) = 0.1 // 光暈範圍
//         // _OutLightPow("Falloff",Float) = 5 // 光暈平方參數
//         // _OutLightStrength("Transparency", Float) = 15 // 光暈強度
// 		_OuterIntensity("OuterIntensity",Range(0.1,8)) = 2 // 光暈強度
// 		_OuterRangeCoef("OuterCoef",Range(0,1)) = 0.2 // 光暈範圍係數
//     }

//     SubShader
//     {
//         Pass // 通道1 用於給物體貼圖、填色
//         {
//             Name "PlaneBase"
//             Tags{ "LightMode" = "Always" "Queue" = "Transparent" "IgnoreProjector " = "True" "RenderType" = "Transparent" }
//             Cull Back
//             //CG程序開始
// 			ZWrite Off
// 			Blend SrcAlpha OneMinusSrcAlpha
//             CGPROGRAM
// // 聲明頂點著色器函數為vert
// #pragma vertex vert
// // 聲明片段著色器函數為frag
// #pragma fragment frag
// #include "Lighting.cginc"
// #include "UnityCG.cginc"
//             // 函數可能用到的參數
//             uniform sampler2D _MainTex;
//             uniform float4 _MainTex_ST;
// 			uniform float _AlphaScale;
//             uniform float4 _Color;
//             uniform float4 _AtmoColor;
//             uniform float _Size;
//             uniform float _OutLightPow;
//             uniform float _OutLightStrength;
//             // 頂點著色器的輸出
//             struct vertexOutput
//             {
//                 float4 pos:SV_POSITION;
//                 float3 normal:TEXCOORD0;
//                 float3 worldvertpos:TEXCOORD1;
//                 float2 texcoord:TEXCOORD2;
//             };
//             //頂點著色器函數
//             vertexOutput vert(appdata_base v)
//             {
//                 vertexOutput o;
//                 // 頂點位置
//                 o.pos = UnityObjectToClipPos(v.vertex);
//                 // 法線
//                 o.normal = v.normal;
//                 // 世界坐標頂點位置
//                 o.worldvertpos = mul(unity_ObjectToWorld, v.vertex).xyz;
//                 // 紋理
//                 o.texcoord = TRANSFORM_TEX(v.texcoord, _MainTex);
//                 return o;
//             }
//             // 片段著色器函數
//             float4 frag(vertexOutput i) :SV_TARGET0
//             {   
// 				float3 worldNormal = normalize(i.normal);
// 				float3 worldLightDir = normalize(_WorldSpaceLightPos0.xyz - i.worldvertpos);

//                 float4 color = tex2D(_MainTex, i.texcoord);

// 				float3 albedo = color.rgb * _Color.rgb;
// 				float3 ambient = UNITY_LIGHTMODEL_AMBIENT.xyz * albedo;
// 				float3 diffuse = _LightColor0.rgb * albedo * max(0, dot(worldNormal, worldLightDir));
//                 // i.normal = normalize(i.normal);  // 視角法線
//                 // float3 viewdir = normalize(i.worldvertpos.xyz - _worldspacecamerapos.xyz);// normalize(i.worldvertpos - _worldspacecamerepos);
//                 // float4 color0 = _atmocolor; // 視角法線與模型法線點積形成中間指為1向四周逐漸衰減為0的點積值，賦給透明通道，形成光暈效果
//                 // color0.a = _outlightpow*(1 - dot(viewdir, i.normal));
//                 // color.rgb = lerp(color.rgb, color0.rgb, color0.a);
//                 // 紋理貼圖疊加顏色
//                 return float4(ambient + diffuse, color.a * _AlphaScale);
//             }
//             ENDCG
//         }

//         //通道2： 用於生成模型外部的光暈
//         Pass
//         {
//             Name "AtmosphereBase"
//             Tags{ "LightMode" = "ForwardBase" }
//             Cull Front
//             Blend SrcAlpha One

//             CGPROGRAM
// #pragma vertex vert
// #pragma fragment frag
// #include "UnityCG.cginc"
//             uniform float4 _Color;
//             uniform float4 _AtmoColor;
//             uniform float _Size;
//             uniform float _OutLightPow;
//             uniform float _OutLightStrength;

//             struct vertexOutput
//             {
//                 float4 pos:SV_POSITION;
//                 float3 normal:TEXCOORD0;
//                 float3 worldvertpos:TEXCOORD1;
//             };

//             vertexOutput vert(appdata_base v)
//             {
//                 vertexOutput o;
//                 //頂點位置以法線方向向外延伸
//                 v.vertex.xyz += v.normal*_Size;
//                 o.pos = UnityObjectToClipPos(v.vertex);
//                 o.normal = v.normal;
//                 o.worldvertpos = mul(unity_ObjectToWorld, v.vertex);
//                 return o;
//             }

//             float4 frag(vertexOutput i):COLOR
//             {
//                 i.normal = normalize(i.normal);
//                 // 視角法線
//                 float3 viewdir = normalize(i.worldvertpos.xyz - _WorldSpaceCameraPos.xyz);// normalize(i.worldvertpos - _WorldSpaceCamerePos);
//                 float4 color = _AtmoColor;
//                 // 視角法線與模型法線點積形成中間指為1向四周逐漸衰減為0的點積值，賦給透明通道，形成光暈效果
//                 color.a = pow(saturate(dot(viewdir, i.normal)), _OutLightPow);
//                 color.a *= _OutLightStrength*dot(viewdir, i.normal);
//                 return color;
//             }
//             ENDCG
//         }
//     }
//     FallBack "Diffuse"
Properties{
		_MainColor("MainColor", Color) = (1,1,1,1)
		//光暈強度
		_OuterIntensity("OuterIntensity",Range(0.1,8)) = 2  
		//光暈範圍係數
		_OuterRangeCoef("OuterCoef",Range(0,1)) = 0.2

		[Toggle] _isOuter("OuterLight", Float) = 0
	}
		SubShader{
			Tags { "RenderType" = "Opaque" "Queue" = "Transparent" } 
			LOD 200
//=====================================光暈渲染通道
			Pass
			{
			Blend Srcalpha one  
			Zwrite Off

			CGPROGRAM
			#pragma vertex vert
			#pragma fragment frag
			#include "UnityCG.cginc"

			fixed4 _MainColor;
			float _OuterIntensity;
			float _OuterRangeCoef;
		
			struct v2f
			{
				float4 pos:SV_POSITION;
				float3 normal:TEXCOORD0;
				float4 vertex:TEXCOORD1;
			};

			v2f vert(appdata_base v)
			{
				v2f o;
				//光暈頂點沿法線方向的係數偏移
				v.vertex.xyz += v.normal*_OuterRangeCoef; 
				o.pos = UnityObjectToClipPos(v.vertex);
				o.normal = v.normal;
				o.vertex = v.vertex;
				return o;
			}

			fixed4 frag(v2f i):SV_TARGET
			{
				float3 N = UnityObjectToWorldNormal(i.normal);
				float3 V = normalize(WorldSpaceViewDir(i.vertex));
				float bright = pow(saturate(dot(N, V)), _OuterIntensity);
				_MainColor.a *= 0;
				return _MainColor;
			}

				ENDCG
	}

		//=====================================發光物體本身邊緣發光
				Pass
				{
				Tags{"LightMode" = "ForwardBase"}
				// Blend one one
				Blend One OneMinusSrcAlpha
				// Blend SrcAlpha OneMinusSrcAlpha
				ZWrite Off
				CGPROGRAM
				#pragma vertex vert
				#pragma fragment frag
				#include "UnityCG.cginc"

				fixed4 _MainColor;
				float _OuterIntensity;
				float _isOuter;

				struct v2f
				{
					float4 pos:SV_POSITION;
					float3 normal:TEXCOORD0;
					float4 vertex:TEXCOORD1;
				};

				v2f vert(appdata_base v)
				{
					v2f o;
					o.pos = UnityObjectToClipPos(v.vertex);
					o.vertex = v.vertex;
					o.normal = v.normal;
					return o;

				}
				fixed4 frag(v2f i):COLOR
				{
					float3 N = UnityObjectToWorldNormal(i.normal);
					float3 V = normalize(WorldSpaceViewDir(i.vertex));
					
					float bright;
					
					if(_isOuter)	// 整體發光
						bright = bright = pow(1.0 - saturate(dot(N, V)), _OuterIntensity);
					else		// 邊緣發光
						bright = pow(saturate(dot(N, V)), _OuterIntensity);

					return _MainColor*bright;
				}

				ENDCG
			}		
	}
	FallBack "Diffuse"
}