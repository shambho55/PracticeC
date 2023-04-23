class DynamicArray{
	int *data;
	int nextIndex;
	int capacity;

public:
	DynamicArray() {
		data = new int[5];
		nextIndex = 0;
		capacity = 5;
	}

	DynamicArray(DynamicArray const &d){
		// shallow Copy should be avoided
		//this -> data = d.data;
		// Deep copy
		this -> data = new int[d.capacity];
		for(int i = 0;i < d.nextIndex;i++){
			this -> data[i] = d.data[i];
		}
		this -> nextIndex = d.nextIndex;
		this -> capacity = d.capacity;
	}

	void operator=(DynamicArray const &d){
		this -> data = new int[d.capacity];
		for(int i = 0;i < d.nextIndex;i++){
			this -> data[i] = d.data[i];
		}
		this -> nextIndex = d.nextIndex;
		this -> capacity = d.capacity;
	}
	
	void add(int element){
		if(nextIndex == capacity){
			int *nextData = new int[2 * capacity];
			for(int i = 0;i < capacity;i++){
				nextData[i] = data[i]; 
			}
			delete [] data;
			data = nextData;
			nextIndex = capacity;
			capacity = 2 * capacity;
		}
		data[nextIndex] = element;
		nextIndex++;
	}

	int get(int i) const{
		if(i < nextIndex){
			return data[i];
		}
		return  -1;
	}

	void add(int i,int element){
		if(i < nextIndex){
			data[i] = element;
		}
		else if(i == nextIndex){
			add(element);		
		}
		else{
			return;
		}
	}
	void print() const{
		for(int i = 0;i < nextIndex;i++){
			cout << data[i] << " ";
		}
		cout << endl;
	}
};