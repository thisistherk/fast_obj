# fast_obj

Because the world needs another OBJ loader.  Much faster (5-10x) than other libraries, but much
less tested.  If you want a stable well tested library, I'd probably go elsewhere for now.

Single header library, should compile without warnings in both C89 or C++.

Code pulled out of a larger project and massaged until it compiled, so if it looks a bit wierd in
places, that's why!

To use:

     fastObjMesh* mesh = fast_obj_read("path/to/objfile.obj");

     ...do stuff with mesh...

     fast_obj_destroy(mesh);

Simple test app to compare speed against [tinyobjloader](https://github.com/syoyo/tinyobjloader) and
check output matches.


