py='python'
cp='cookie-party.py'
res='results'

test : cookie-party.py
	($(py) $(cp) < test1) >  $(res)
	($(py) $(cp) < test2) >> $(res)
	($(py) $(cp) < test3) >> $(res)
	($(py) $(cp) < test4) >> $(res)
	($(py) $(cp) < test5) >> $(res)
	diff $(res) ideal_results
