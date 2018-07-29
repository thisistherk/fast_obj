# fast_obj

Because the world needs another OBJ loader.
Single header library, should compile without warnings in both C89 or C++.
Much faster (5-10x) than other libraries tested.

To use:

     fastObjMesh* mesh = fast_obj_read("path/to/objfile.obj");

     ...do stuff with mesh...

     fast_obj_destroy(mesh);

Simple test app to compare speed against [tinyobjloader](https://github.com/syoyo/tinyobjloader) and
check output matches.


