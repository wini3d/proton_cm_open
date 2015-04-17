attribute vec4 a_position;                            
uniform   mat4 u_MVPMatrix;                            
uniform   vec4 u_color;                                
uniform float u_pointSize;                            
                                                    
varying vec4 v_fragmentColor;                        
                                                    
void main()                                            
{                                                    
    gl_Position = u_MVPMatrix * a_position;            
    gl_PointSize = u_pointSize;                        
    v_fragmentColor = u_color;                        
}                                                    
