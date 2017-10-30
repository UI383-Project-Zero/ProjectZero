/* 
	Chooser class

	The chooser performs a series of actions on an individual customer
	It is invoked by Crowd Director's updateCustomer method
	
	At this time it is assumed all weights and decision algorithms in Chooser are non-configurable. If this changes, the following implementation will be altered to include a constructor which reads in configurations. Private members will hold the necessary information.
	
	Call sequence:
		newSubject- Get a new customer pointer
		statusCheck- Check status(free, queue, occupied)
		--PatienceCheck- Queued customer. Decide whether to leave queue, update stats
			OR
		--AttractionSelect- Free customer. Chooses ride
*/

class KCChooser{
	private:
		SACustomer* mSubject;
	public:
		KCChooser();
		~KCChooser();
		
		void newSubject(SACustomer*);
		unsigned int statusCheck();
		unsigned int PatienceCheck();
		PlHAttractionPointer AttractionSelect();
}