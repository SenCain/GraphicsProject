#version 430

layout(location = 0) in vec4 position;
layout(location = 3) in vec2 UV;
layout(location = 0) uniform sampler2D renderTex;

out vec2 vUV;

void main()
{
	vUV = UV;
	gl_Position = position;
}