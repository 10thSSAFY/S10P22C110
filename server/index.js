const express = require("express");

app.use(express.json());

app.get("/", (req, res) => {
  res.send("You need to request API");
});

app.listen(PORT, () => console.log(`${PORT} 서버 기동중`));