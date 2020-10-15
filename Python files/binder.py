import bpy

verts = [(0,0,0),(0,5,0),(5,5,0),(5,0,0),(0,0,5),(0,5,5),(5,5,5),(5,0,5)]
faces = [(0,1,2,3),(7,6,5,4),(0,4,5,1),(1,5,6,2),(2,6,7,3),(3,7,4,0)]

mymesh = bpy.data.meshes.new("Cube")
myobject = bpy.data.objects.new("Cube", mymesh)

myobject.location = bpy.context.scene.cursor_location
bpy.context.scene.objects.link(myobject)

mymesh.from_pydata(verts,[],faces)
mymesh.update(calc_edges=True)








import bpy
from random import randint
for i in range(50):
      bpy.ops.mesh.primitive_cube_add(
         location = [ randint(-10,10) for axis in 'xyz' ]
         )
      
      
from math import sin
for i in range(50):
     x,y,z = 0, i , sin(i)
     bpy.ops.mesh.primitive_cube_add(
         location = [x,y,z]
         )
     


import numpy as np

m = bpy.data.meshes.new('sin')
n =100
m.vertices.add(n)
m.edges.add(n-1)

      
      
      