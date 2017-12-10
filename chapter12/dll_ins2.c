if(next != NULL)
	{
		newnode->fwd = next;
		if( this != rootp) {
			this->fwd = newnode;
			newnode->bwd = this;
		}
		else {
			rootp->fwd = newnode;
			newnode->bwd = NULL;
		}
		next->bwd = newnode;
	}
	else {
		newnode->fwd = NULL;
		if( this!= NULL) {
			this->fwd = newnode;
			newnode->bwd = this;
		}
		else {
			rootp->fwd = newnode;
			newnode->bwd = NULL;
		}
		rootp->bwd = newnode;
	}
			