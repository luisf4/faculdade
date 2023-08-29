var client = new HttpClient();
var request = new HttpRequestMessage(HttpMethod.Get, "https://www.cheapshark.com/api/1.0/deals?storeID=1&upperPrice=15");
var response = await client.SendAsync(request);
response.EnsureSuccessStatusCode();
Console.WriteLine(await response.Content.ReadAsStringAsync());
