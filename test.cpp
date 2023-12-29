#include "glm_lite.hpp"

using namespace glm;

void test_glm_mat4()
{
	glm::mat4 m1;
	glm::mat4 m2(5);

	glm::mat4 view = glm::translate(view, glm::vec3(1, 2, 3));
}

int main()
{
	test_glm_mat4();

	return 0;
}