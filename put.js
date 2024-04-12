router.put('/:id', async (req, res) => {
    try {
        const personId = req.params.id; // extract the Id from the URL parameter 
        const updatePersonData = req.body; // updated data for the person

        const response = await person.findByIdAndUpdate(personId, updatePersonData, {
            new: true,// return the updated document 
            runValidators: true, // run mongoose validation 
        })
        if (!response) {
            return res.status(404).json({ error: 'Person not found' });
        }
        console.log('data updated');
        res.status(200).json(response);
    
        
    } catch (err) {
        console.log(err);
    }

})