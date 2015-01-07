#ifndef _RECORDS_H_
#define _RECORDS_H_

typedef std::string ProjectString;

class CProjRecords{
		public:
				CProjRecords() {
						mObjId = -1;
				};
				CProjRecords(CProjRecords& r) : mObjId(r.getObjId()), mDescription(r.getDescription()), \
												mCurrentValue(r.getCurrentValue()), mLockFlag(r.getLockFlag()),\
											   	mLockCount(r.getLockCount())
				{
				};
				~CProjRecords(){};
				int getObjId() { return mObjId; };
				void setObjId(int id){ mObjId = id;};
				ProjectString getDescription() { return mDescription;};
				void setDescription(const ProjectString descr) {
						mDescription = descr;
				};
				float getCurrentValue() { return mCurrentValue;};
				void setCurrentValue(float v) { mCurrentValue = v; };
				bool getLockFlag() { return mLockFlag;};
				void setLockFlag(bool f) { mLockFlag = f; };
				int getLockCount() { return mLockFlag;};
				void setLockCount(int c) { mLockCount = c; };

		private:
				int              mObjId;
				ProjectString    mDescription;
				float            mCurrentValue;
				unsigned char    mLockFlag;
				int              mLockCount;
};

#endif
