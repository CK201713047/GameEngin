#include "Precompiled.h"
#include "Camera.h"

Matrix4x4 Camera::GetViewMatrix()
{
	return Matrix4x4
	(
		Vector4::UnitX,
		Vector4::UnitY,
		Vector4::UnitZ,
		Vector4(-Transform.GetPosition(), true)
	);
}