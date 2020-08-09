#version 300 es

struct frogstruct {
    vec4 color;
    float start;
    float end;
} frog;

void main() {

    vec3 f3 = vec3(1.0,1.0,1.0);
    vec3 temo = f3.xyz;

    frog = frogstruct(vec4(1.0,0,0,0),1.0,1.0);



    vec4 v_color = frog.color;
}
