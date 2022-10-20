#ifndef ARRAY_HPP
# define ARRAY_HPP

template <typename T>

class Array
{
	private:
	T *array;
	int len;
	public:
	Array()
	{
		this->len = 0;
		this->array = new T[len];
	}
	Array(int n)
	{
		this->len = n;
		this->array = new T[len];
	}
	~Array()
	{
		delete[] this->array;
	}
	Array(const Array& copy)
	{
		this->len = copy.len;
		this->array = new T[len];
	}
	Array& operator = (const Array &op)
	{
		delete[] this->array;
		this->len = op.len;
		this->array = new T[len];
		if (this->len > 0)
		{
			for(int i = 0; i < len; i++)
				this->array[i] = op.array[i];
		}
		return(*this);
	}
	T &operator[](T index){
		if (index > this->len - 1 || this->len <= 0 || index < 0)
			throw OutofBonds();
		return(this->array[index]);
	}
	class OutofBonds: public std::exception
	{
		public:
		virtual const char* what() const throw()
		{
			return "The index is out of bonds, error";
		}
	};
	T size()
	{
		return (this->len);
	}
};
#endif


