#pragma once

namespace Tree
{
	template<typename T>
	class AVLTree
	{
	public:
		AVLTree() { root = 0; }
		AVLTree(T data) { root = new Node(data); }
		~AVLTree() { clear(); }

		// добавление
		void add(T data);

		// удаление
		void remove(T data);

		// поиск
		bool search(T data);

		// представление в виде массива 
		T* toArray();

	private:
		struct Node
		{
			T data;
			Node* left;
			Node* right;

			Node(T data)
			{
				this->data = data;
				left = 0;
				right = 0;
			}
		};

		// корень
		Node* root;

		// восстановление свойств
		void restore();

		// удаление дерева
		void clear();
	};
}