// I need a sample cs file with some fun stuff for highlighting
using System;

class Program
{
    static void Main(string[] args)
    {
        Console.WriteLine("Hello, World!");
    }
}

class SampleClass
{
	 	private string message = "hello";
	  int x = 42;
	  string s = "hello";
	  [Parameter] public KnownUserViewModel NewUser { get; set; } = new();
	  [Parameter] public List<string> Roles { get; set; } = new();
	  [Parameter] public List<string> AvailableParentClientIds { get; set; } = new();
	  [Parameter] public string SelectedParentClientId { get; set; } = "";
	  [Parameter] public string CustomParentClientId { get; set; } = "";
	  [Parameter] public bool IsSuperAdmin { get; set; }
	  [Parameter] public string EffectiveParentClientId { get; set; } = "";
	  [Parameter] public object? RootBusiness { get; set; }
	  [Parameter] public string CurrentUserBusinessId { get; set; } = "";
	  [Parameter] public bool IsLoading { get; set; }
	  [Parameter] public string StatusMessage { get; set; } = "";
    public void SampleMethod()
    {
        Console.WriteLine("Sample method called!");
    }
}

class AnotherSampleClass
{
    public void AnotherSampleMethod()
    {
        Console.WriteLine("Another sample method called!");
    }
}
