#ifndef UNSORTEDTYPE_H_INCLUDED
#define UNSORTEDTYPE_H_INCLUDED

const int MAX_ITEM = 5;
template <class t>
class UnsortedType {
public:
	UnsortedType();
	void MakeEmpty();
	bool IsFull();
	int lengthIs();
	void InsertItem(t);
	void DeleteItem(t);
	void RetrieveItem(t&, bool&);
	void ResetList();
	void GetNextItem(t&);
private:
	int length;
	t info[MAX_ITEM];
	int currentPos;
};

#endif /* UNSORTEDTYPE_H_INCLUDED*/
