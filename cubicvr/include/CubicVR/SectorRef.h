/*
 This file is part of CubicVR.
 
	Copyright (C) 2003 by Charles J. Cliffe

	Permission is hereby granted, free of charge, to any person obtaining a copy
	of this software and associated documentation files (the "Software"), to deal
	in the Software without restriction, including without limitation the rights
	to use, copy, modify, merge, publish, distribute, sublicense, and/or sell
	copies of the Software, and to permit persons to whom the Software is
	furnished to do so, subject to the following conditions:

	The above copyright notice and this permission notice shall be included in
	all copies or substantial portions of the Software.

	THE SOFTWARE IS PROVIDED "AS IS", WITHOUT WARRANTY OF ANY KIND, EXPRESS OR
	IMPLIED, INCLUDING BUT NOT LIMITED TO THE WARRANTIES OF MERCHANTABILITY,
	FITNESS FOR A PARTICULAR PURPOSE AND NONINFRINGEMENT. IN NO EVENT SHALL THE
	AUTHORS OR COPYRIGHT HOLDERS BE LIABLE FOR ANY CLAIM, DAMAGES OR OTHER
	LIABILITY, WHETHER IN AN ACTION OF CONTRACT, TORT OR OTHERWISE, ARISING FROM,
	OUT OF OR IN CONNECTION WITH THE SOFTWARE OR THE USE OR OTHER DEALINGS IN
	THE SOFTWARE.
 */

#ifndef SECTORREF_H
#define SECTORREF_H

class SceneObject;
class Light;

typedef struct _SectorRef
{
	SceneObject *sceneobj;
} SectorRef;


typedef struct _SectorLoc
{
	cvrIndex x,y,z;
} SectorLoc;

typedef struct _SectorNode
{
	set<SceneObject *> sceneobj;
	set<Light *> light;

	SectorLoc loc;
} SectorNode;



#endif
