#include <iostream>
#include <memory>

template<typename tvalue>
class BinaryTree
{

	private:
		std::shared_ptr<BinaryTree> left;
		std::shared_ptr<BinaryTree> right;
		tvalue value;
		bool is_set;
	public:
		BinaryTree()
		{
			is_set = false;
		}
		void insert(tvalue value)
		{
			if (is_set) {
				if (this->value > value) {
					if (!left) {
						left = std::make_shared<BinaryTree>();
					}
					left->insert(value);
				} else {
					if (!right) {
						right = std::make_shared<BinaryTree>();
					}
					right->insert(value);
				}
			} else {
				this->value = value;
				is_set = true;
			}
		}

		void inorder_show()
		{
			if (left) left->inorder_show();
			std::cout << "value=" << value << std::endl;
			if (right) right->inorder_show();
		}

		void preorder_show()
		{
			std::cout << "value=" << value << std::endl;
			if (left) left->preorder_show();
			if (right) right->preorder_show();
		}

		void postorder_show()
		{
			if (left) left->postorder_show();
			if (right) right->postorder_show();
			std::cout << "value=" << value << std::endl;
		}

};

	
auto main() -> int
{
	BinaryTree<int> arbol;
	arbol.insert(5);
	arbol.insert(3);
	arbol.insert(7);
	arbol.insert(1);
	arbol.insert(4);
	arbol.insert(6);
	arbol.insert(8);
	std::cout << "preorder" << std::endl;
	arbol.preorder_show(); // deberiamos ver 1,3,4,5,6,7,8
	std::cout << "inorder" << std::endl;
	arbol.inorder_show();
	std::cout << "postorder" << std::endl;
	arbol.postorder_show();
}



